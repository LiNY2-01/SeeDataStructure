/********************************************************************************
** Form generated from reading UI file 'arr.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARR_H
#define UI_ARR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <table.h>

QT_BEGIN_NAMESPACE

class Ui_arr
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSplitter *splitter_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    Table *tableView;

    void setupUi(QDialog *arr)
    {
        if (arr->objectName().isEmpty())
            arr->setObjectName(QStringLiteral("arr"));
        arr->resize(1021, 576);
        gridLayout = new QGridLayout(arr);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(arr);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("background-color: rgb(254, 254, 254);\n"
"\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;\n"
"\n"
"border-bottom-left-radius:10px;\n"
"\n"
"border-bottom-right-radius:10px;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(24, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(20, 20));
        pushButton_2->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_2);

        splitter_2 = new QSplitter(frame);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        splitter_2->addWidget(layoutWidget);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeWidget = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(2, font);
        __qtreewidgetitem->setFont(1, font);
        __qtreewidgetitem->setFont(0, font);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMaximumSize(QSize(350, 2000));
        splitter->addWidget(treeWidget);
        tableView = new Table(splitter);
        tableView->setObjectName(QStringLiteral("tableView"));
        splitter->addWidget(tableView);
        splitter_2->addWidget(splitter);

        verticalLayout->addWidget(splitter_2);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(arr);
        QObject::connect(pushButton_2, SIGNAL(clicked()), arr, SLOT(showMinimized()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), arr, SLOT(close()));

        QMetaObject::connectSlotsByName(arr);
    } // setupUi

    void retranslateUi(QDialog *arr)
    {
        arr->setWindowTitle(QApplication::translate("arr", "Dialog", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("arr", "-", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("arr", "\303\227", Q_NULLPTR));
        label->setText(QApplication::translate("arr", "       \345\217\230\351\207\217\345\220\215", Q_NULLPTR));
        pushButton->setText(QApplication::translate("arr", "\346\267\273\345\212\240", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("arr", "\346\225\260\346\215\256", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("arr", "\345\234\260\345\235\200", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("arr", "\345\217\230\351\207\217\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class arr: public Ui_arr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARR_H
