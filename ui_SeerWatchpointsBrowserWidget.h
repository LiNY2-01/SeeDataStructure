/********************************************************************************
** Form generated from reading UI file 'SeerWatchpointsBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERWATCHPOINTSBROWSERWIDGET_H
#define UI_SEERWATCHPOINTSBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerWatchpointsBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *watchpointsTreeWidget;
    QVBoxLayout *verticalLayout;
    QToolButton *refreshWatchpointsToolButton;
    QToolButton *addWatchpointToolButton;
    QToolButton *deleteWatchpointsToolButton;
    QToolButton *enableWatchpointsToolButton;
    QToolButton *disableWatchpointsToolButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SeerWatchpointsBrowserWidgetForm)
    {
        if (SeerWatchpointsBrowserWidgetForm->objectName().isEmpty())
            SeerWatchpointsBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerWatchpointsBrowserWidgetForm"));
        SeerWatchpointsBrowserWidgetForm->resize(794, 528);
        gridLayout = new QGridLayout(SeerWatchpointsBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        watchpointsTreeWidget = new QTreeWidget(SeerWatchpointsBrowserWidgetForm);
        watchpointsTreeWidget->setObjectName(QString::fromUtf8("watchpointsTreeWidget"));
        watchpointsTreeWidget->setColumnCount(15);

        gridLayout->addWidget(watchpointsTreeWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        refreshWatchpointsToolButton = new QToolButton(SeerWatchpointsBrowserWidgetForm);
        refreshWatchpointsToolButton->setObjectName(QString::fromUtf8("refreshWatchpointsToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/view-refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        refreshWatchpointsToolButton->setIcon(icon);

        verticalLayout->addWidget(refreshWatchpointsToolButton);

        addWatchpointToolButton = new QToolButton(SeerWatchpointsBrowserWidgetForm);
        addWatchpointToolButton->setObjectName(QString::fromUtf8("addWatchpointToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addWatchpointToolButton->setIcon(icon1);

        verticalLayout->addWidget(addWatchpointToolButton);

        deleteWatchpointsToolButton = new QToolButton(SeerWatchpointsBrowserWidgetForm);
        deleteWatchpointsToolButton->setObjectName(QString::fromUtf8("deleteWatchpointsToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/edit-delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        deleteWatchpointsToolButton->setIcon(icon2);

        verticalLayout->addWidget(deleteWatchpointsToolButton);

        enableWatchpointsToolButton = new QToolButton(SeerWatchpointsBrowserWidgetForm);
        enableWatchpointsToolButton->setObjectName(QString::fromUtf8("enableWatchpointsToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        enableWatchpointsToolButton->setIcon(icon3);

        verticalLayout->addWidget(enableWatchpointsToolButton);

        disableWatchpointsToolButton = new QToolButton(SeerWatchpointsBrowserWidgetForm);
        disableWatchpointsToolButton->setObjectName(QString::fromUtf8("disableWatchpointsToolButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        disableWatchpointsToolButton->setIcon(icon4);

        verticalLayout->addWidget(disableWatchpointsToolButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(SeerWatchpointsBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerWatchpointsBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerWatchpointsBrowserWidgetForm)
    {
        SeerWatchpointsBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = watchpointsTreeWidget->headerItem();
        ___qtreewidgetitem->setText(14, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Used", nullptr));
        ___qtreewidgetitem->setText(13, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "New Value", nullptr));
        ___qtreewidgetitem->setText(12, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Value", nullptr));
        ___qtreewidgetitem->setText(11, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Expression", nullptr));
        ___qtreewidgetitem->setText(10, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Times", nullptr));
        ___qtreewidgetitem->setText(9, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Thread Groups", nullptr));
        ___qtreewidgetitem->setText(8, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Line", nullptr));
        ___qtreewidgetitem->setText(7, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Fullname", nullptr));
        ___qtreewidgetitem->setText(6, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "File", nullptr));
        ___qtreewidgetitem->setText(5, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Function", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Address", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Enabled", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Disposition", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Type", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Number", nullptr));
#ifndef QT_NO_TOOLTIP
        refreshWatchpointsToolButton->setToolTip(QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Refresh the list of watchpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        refreshWatchpointsToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        addWatchpointToolButton->setToolTip(QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Add a new watchpoint.", nullptr));
#endif // QT_NO_TOOLTIP
        addWatchpointToolButton->setText(QApplication::translate("SeerWatchpointsBrowserWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        deleteWatchpointsToolButton->setToolTip(QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Delete selected watchpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        deleteWatchpointsToolButton->setText(QApplication::translate("SeerWatchpointsBrowserWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        enableWatchpointsToolButton->setToolTip(QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Enable selected watchpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        enableWatchpointsToolButton->setText(QApplication::translate("SeerWatchpointsBrowserWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        disableWatchpointsToolButton->setToolTip(QApplication::translate("SeerWatchpointsBrowserWidgetForm", "Disable selected watchpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        disableWatchpointsToolButton->setText(QApplication::translate("SeerWatchpointsBrowserWidgetForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerWatchpointsBrowserWidgetForm: public Ui_SeerWatchpointsBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERWATCHPOINTSBROWSERWIDGET_H
