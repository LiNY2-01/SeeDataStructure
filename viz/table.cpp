#include "table.h"
#include "util.h"
#include<QHeaderView>
#include<QStandardItemModel>
#include <QDebug>
#include<QMessageBox>

Table::Table(QWidget *parent) : QTableView(parent)
{

    model = new QStandardItemModel(this);
    this->setModel(model);
   model->setItem(0, 0, new QStandardItem("张三"));
   model->setItem(0, 1, new QStandardItem("3"));
   model->setItem(0, 2, new QStandardItem("男"));
}

void Table::setVariableName(const QString &name)
{
    qDebug()<<name<<endl;
//   emit evaluateVariableExpression(_variableId, name);

}

void Table::setVariableAddress(const QString &address)
{
    qDebug()<<address<<endl;
    if (address.startsWith("0x")) {

        bool ok = false;

        address.toULong(&ok, 16);

        if (ok == true) {
            variableAddress=address;
        }
        else {
            variableAddress="not an address";
        }

    }
    else {
        variableAddress="not an address";
    }
    refresh();
}

void Table::refresh()
{
    if (variableAddress == "not an address") {
        return;
    }
    int bytes = 20;

    //qDebug() << _memoryId << variableAddressLineEdit->text() << arrayLengthLineEdit->text() << arrayDisplayFormatComboBox->currentText() << bytes;

    emit evaluateMemoryExpression(_memoryId, variableAddress, bytes);
}



void Table::handleText(const QString &text)
{


    if (text.contains(QRegExp("^([0-9]+)\\^done,value="))) {

        // 10^done,value="1"
        // 11^done,value="0x7fffffffd538"

        QString id_text = text.section('^', 0,0);
//        qDebug() << text<<"**********************"<<_variableId<<endl;
//        qDebug() << text<<"**********************"<<id_text.toInt()<<endl;
        if (id_text.toInt() == _variableId) {

            QStringList words = SDS::filterEscapes(SDS::parseFirst(text, "value=", '"', '"', false)).split(' ', QString::SkipEmptyParts);

            setVariableAddress(words.first());
        }

    }else if (text.contains(QRegExp("^([0-9]+)\\^done,memory="))) {

        // 3^done,memory=[{begin="0x0000000000613e70",offset="0x0000000000000000",end="0x0000000000613e71",contents="00"}]
        // 4^done,memory=[{begin="0x0000000000613e70",offset="0x0000000000000000",end="0x0000000000613ed4",contents="000000000000000000000000"}]

        QString id_text = text.section('^', 0,0);

        if (id_text.toInt() == _memoryId) {


            QString memory_text = SDS::parseFirst(text, "memory=", '[', ']', false);

            QStringList range_list = SDS::parse(memory_text, "", '{', '}', false);

            // Loop through the memory ranges.
            num=0;
            for ( const auto& range_text : range_list  ) {

                QString contents_text = SDS::parseFirst(range_text, "contents=", '"', '"', false);

                //qDebug() << contents_text;

                // Convert hex string to byte array.
                QByteArray array;

                for (int i = 0; i<contents_text.size(); i += 2) {
                    QString number = contents_text.mid(i, 2);
                    bool ok = false;
                    array.push_back(number.toInt(&ok, 16));
                    Q_ASSERT(ok);
                }

                // Give the byte array to the hex widget.
//                qDebug()<<"********************"<<array.size()<<"****************************"<<endl;
                for(int i=0;i<array.size();i++)
                {
//                    qDebug() <<(int)array[i] <<endl;
                   QStandardItem* item = new QStandardItem((int)array[i]);
                   item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
                   model->setItem(num, i, item);
                   model->setHeaderData(i,Qt::Horizontal, i);
                }
                model->setHeaderData(num,Qt::Vertical, variableName);
//                this->resizeColumnsToContents();
                this->setModel(model);
                qDebug()<<"********************"<<model<<"****************************"<<endl;
                num++;
                break; // Take just the first range for now.
            }
        }

    }else if (text.contains(QRegExp("^([0-9]+)\\^error,msg="))) {

        // 12^error,msg="No symbol \"return\" in current context."
        // 13^error,msg="No symbol \"cout\" in current context."
        // 3^error,msg="Unable to read memory."

        QString id_text = text.section('^', 0,0);

        if (id_text.toInt() == _variableId) {
//            variableAddressLineEdit->setText( SDS::filterEscapes(SDS::parseFirst(text, "msg=", '"', '"', false)) );
        }

        if (id_text.toInt() == _memoryId) {
            // Display the error message.
            QString msg_text = SDS::parseFirst(text, "msg=", false);

            if (msg_text != "") {
//                QMessageBox::warning(this, "Error.", SDS::filterEscapes(msg_text));
            }
        }

    }else{
        // Ignore anything else.
    }
}
void Table::del_var(QModelIndex index)
{
    QVariant var=model->headerData(index.row(),Qt::Vertical);
//    qDebug()<<var.toString()<<endl;
    model->removeRow(index.row());
    num--;
    var_list.removeOne(var.toString());
    emit(del_tree(var.toString()));
}

void Table::add_table(QString var_name)
{
    qDebug() << "******************************" << endl;
    _variableId = SDS::createID();
    _memoryId = SDS::createID();
    variableName = var_name;
    setVariableName(var_name);
    emit evaluateVariableExpression(_variableId, var_name);

}
