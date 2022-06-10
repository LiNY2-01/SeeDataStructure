/********************************************************************************
** Form generated from reading UI file 'QProcessInfoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPROCESSINFOWIDGET_H
#define UI_QPROCESSINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QProcessInfoWidget
{
public:
    QGridLayout *gridLayout;
    QCheckBox *systemProcessesCheckBox;
    QToolButton *refreshToolButton;
    QTreeWidget *processTreeWidget;
    QLineEdit *programNameLineEdit;
    QLineEdit *userNameLineEdit;

    void setupUi(QWidget *QProcessInfoWidget)
    {
        if (QProcessInfoWidget->objectName().isEmpty())
            QProcessInfoWidget->setObjectName(QString::fromUtf8("QProcessInfoWidget"));
        QProcessInfoWidget->resize(770, 488);
        gridLayout = new QGridLayout(QProcessInfoWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        systemProcessesCheckBox = new QCheckBox(QProcessInfoWidget);
        systemProcessesCheckBox->setObjectName(QString::fromUtf8("systemProcessesCheckBox"));
        systemProcessesCheckBox->setChecked(false);

        gridLayout->addWidget(systemProcessesCheckBox, 0, 2, 1, 1);

        refreshToolButton = new QToolButton(QProcessInfoWidget);
        refreshToolButton->setObjectName(QString::fromUtf8("refreshToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/view-refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        refreshToolButton->setIcon(icon);

        gridLayout->addWidget(refreshToolButton, 0, 3, 1, 1);

        processTreeWidget = new QTreeWidget(QProcessInfoWidget);
        processTreeWidget->setObjectName(QString::fromUtf8("processTreeWidget"));
        processTreeWidget->setSortingEnabled(true);
        processTreeWidget->setColumnCount(4);

        gridLayout->addWidget(processTreeWidget, 1, 0, 1, 4);

        programNameLineEdit = new QLineEdit(QProcessInfoWidget);
        programNameLineEdit->setObjectName(QString::fromUtf8("programNameLineEdit"));
        programNameLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(programNameLineEdit, 0, 0, 1, 1);

        userNameLineEdit = new QLineEdit(QProcessInfoWidget);
        userNameLineEdit->setObjectName(QString::fromUtf8("userNameLineEdit"));
        userNameLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(userNameLineEdit, 0, 1, 1, 1);


        retranslateUi(QProcessInfoWidget);

        QMetaObject::connectSlotsByName(QProcessInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *QProcessInfoWidget)
    {
        QProcessInfoWidget->setWindowTitle(QApplication::translate("QProcessInfoWidget", "System Process Browser", nullptr));
#ifndef QT_NO_TOOLTIP
        systemProcessesCheckBox->setToolTip(QApplication::translate("QProcessInfoWidget", "Show system processes or hide them.", nullptr));
#endif // QT_NO_TOOLTIP
        systemProcessesCheckBox->setText(QApplication::translate("QProcessInfoWidget", "\346\237\245\347\234\213\347\263\273\347\273\237\350\277\233\347\250\213", nullptr));
#ifndef QT_NO_TOOLTIP
        refreshToolButton->setToolTip(QApplication::translate("QProcessInfoWidget", "Refresh the list of processes.", nullptr));
#endif // QT_NO_TOOLTIP
        refreshToolButton->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = processTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("QProcessInfoWidget", "\345\221\275\344\273\244\346\250\241\345\274\217", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("QProcessInfoWidget", "\347\250\213\345\272\217\345\220\215\347\247\260", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("QProcessInfoWidget", "\347\224\250\346\210\267\345\220\215", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("QProcessInfoWidget", "PID", nullptr));
#ifndef QT_NO_TOOLTIP
        programNameLineEdit->setToolTip(QApplication::translate("QProcessInfoWidget", "Search program name in the list of processes. \"*\" is allowed.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        programNameLineEdit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        programNameLineEdit->setText(QApplication::translate("QProcessInfoWidget", "\346\220\234\347\264\242\347\250\213\345\272\217\345\220\215\347\247\260", nullptr));
        programNameLineEdit->setPlaceholderText(QApplication::translate("QProcessInfoWidget", "Search Program Name...", nullptr));
#ifndef QT_NO_TOOLTIP
        userNameLineEdit->setToolTip(QApplication::translate("QProcessInfoWidget", "Search user name in the list of processes. \"*\" is allowed.", nullptr));
#endif // QT_NO_TOOLTIP
        userNameLineEdit->setText(QApplication::translate("QProcessInfoWidget", "\346\220\234\347\264\242\347\224\250\346\210\267\345\220\215", nullptr));
        userNameLineEdit->setPlaceholderText(QApplication::translate("QProcessInfoWidget", "Search User Name...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QProcessInfoWidget: public Ui_QProcessInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPROCESSINFOWIDGET_H
