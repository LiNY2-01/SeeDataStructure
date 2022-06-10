/********************************************************************************
** Form generated from reading UI file 'SeerBreakpointsOptionsBarWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERBREAKPOINTSOPTIONSBARWIDGET_H
#define UI_SEERBREAKPOINTSOPTIONSBARWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerBreakpointsOptionsBarWidgetForm
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *breakpointsLoadTB;
    QToolButton *breakpointsSaveTB;

    void setupUi(QWidget *SeerBreakpointsOptionsBarWidgetForm)
    {
        if (SeerBreakpointsOptionsBarWidgetForm->objectName().isEmpty())
            SeerBreakpointsOptionsBarWidgetForm->setObjectName(QString::fromUtf8("SeerBreakpointsOptionsBarWidgetForm"));
        SeerBreakpointsOptionsBarWidgetForm->resize(94, 25);
        horizontalLayout = new QHBoxLayout(SeerBreakpointsOptionsBarWidgetForm);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        breakpointsLoadTB = new QToolButton(SeerBreakpointsOptionsBarWidgetForm);
        breakpointsLoadTB->setObjectName(QString::fromUtf8("breakpointsLoadTB"));
        breakpointsLoadTB->setMinimumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        breakpointsLoadTB->setIcon(icon);

        horizontalLayout->addWidget(breakpointsLoadTB);

        breakpointsSaveTB = new QToolButton(SeerBreakpointsOptionsBarWidgetForm);
        breakpointsSaveTB->setObjectName(QString::fromUtf8("breakpointsSaveTB"));
        breakpointsSaveTB->setMinimumSize(QSize(24, 24));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-save-as.svg"), QSize(), QIcon::Normal, QIcon::Off);
        breakpointsSaveTB->setIcon(icon1);

        horizontalLayout->addWidget(breakpointsSaveTB);


        retranslateUi(SeerBreakpointsOptionsBarWidgetForm);

        QMetaObject::connectSlotsByName(SeerBreakpointsOptionsBarWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerBreakpointsOptionsBarWidgetForm)
    {
        SeerBreakpointsOptionsBarWidgetForm->setWindowTitle(QApplication::translate("SeerBreakpointsOptionsBarWidgetForm", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        breakpointsLoadTB->setToolTip(QApplication::translate("SeerBreakpointsOptionsBarWidgetForm", "Load previously saved breakpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        breakpointsLoadTB->setText(QApplication::translate("SeerBreakpointsOptionsBarWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        breakpointsSaveTB->setToolTip(QApplication::translate("SeerBreakpointsOptionsBarWidgetForm", "Save breakpoints to a file.", nullptr));
#endif // QT_NO_TOOLTIP
        breakpointsSaveTB->setText(QApplication::translate("SeerBreakpointsOptionsBarWidgetForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerBreakpointsOptionsBarWidgetForm: public Ui_SeerBreakpointsOptionsBarWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERBREAKPOINTSOPTIONSBARWIDGET_H
