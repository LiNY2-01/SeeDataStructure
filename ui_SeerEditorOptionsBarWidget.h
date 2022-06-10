/********************************************************************************
** Form generated from reading UI file 'SeerEditorOptionsBarWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEREDITOROPTIONSBARWIDGET_H
#define UI_SEEREDITOROPTIONSBARWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerEditorOptionsBarWidgetForm
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *fileOpenTB;
    QToolButton *fileCloseTB;
    QToolButton *textSearchTB;

    void setupUi(QWidget *SeerEditorOptionsBarWidgetForm)
    {
        if (SeerEditorOptionsBarWidgetForm->objectName().isEmpty())
            SeerEditorOptionsBarWidgetForm->setObjectName(QString::fromUtf8("SeerEditorOptionsBarWidgetForm"));
        SeerEditorOptionsBarWidgetForm->resize(118, 42);
        horizontalLayout = new QHBoxLayout(SeerEditorOptionsBarWidgetForm);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fileOpenTB = new QToolButton(SeerEditorOptionsBarWidgetForm);
        fileOpenTB->setObjectName(QString::fromUtf8("fileOpenTB"));
        fileOpenTB->setMinimumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        fileOpenTB->setIcon(icon);

        horizontalLayout->addWidget(fileOpenTB);

        fileCloseTB = new QToolButton(SeerEditorOptionsBarWidgetForm);
        fileCloseTB->setObjectName(QString::fromUtf8("fileCloseTB"));
        fileCloseTB->setMinimumSize(QSize(24, 24));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        fileCloseTB->setIcon(icon1);

        horizontalLayout->addWidget(fileCloseTB);

        textSearchTB = new QToolButton(SeerEditorOptionsBarWidgetForm);
        textSearchTB->setObjectName(QString::fromUtf8("textSearchTB"));
        textSearchTB->setMinimumSize(QSize(24, 24));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/edit-find.svg"), QSize(), QIcon::Normal, QIcon::Off);
        textSearchTB->setIcon(icon2);

        horizontalLayout->addWidget(textSearchTB);


        retranslateUi(SeerEditorOptionsBarWidgetForm);

        QMetaObject::connectSlotsByName(SeerEditorOptionsBarWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerEditorOptionsBarWidgetForm)
    {
        SeerEditorOptionsBarWidgetForm->setWindowTitle(QApplication::translate("SeerEditorOptionsBarWidgetForm", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        fileOpenTB->setToolTip(QApplication::translate("SeerEditorOptionsBarWidgetForm", "Open a source file.", nullptr));
#endif // QT_NO_TOOLTIP
        fileOpenTB->setText(QApplication::translate("SeerEditorOptionsBarWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        fileCloseTB->setToolTip(QApplication::translate("SeerEditorOptionsBarWidgetForm", "Close opened source files.", nullptr));
#endif // QT_NO_TOOLTIP
        fileCloseTB->setText(QApplication::translate("SeerEditorOptionsBarWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        textSearchTB->setToolTip(QApplication::translate("SeerEditorOptionsBarWidgetForm", "Show search bar for text.", nullptr));
#endif // QT_NO_TOOLTIP
        textSearchTB->setText(QApplication::translate("SeerEditorOptionsBarWidgetForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerEditorOptionsBarWidgetForm: public Ui_SeerEditorOptionsBarWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEREDITOROPTIONSBARWIDGET_H
