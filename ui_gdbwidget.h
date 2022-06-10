/********************************************************************************
** Form generated from reading UI file 'gdbwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GDBWIDGET_H
#define UI_GDBWIDGET_H

#include <QDetachTabWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <SeerEditorManagerWidget.h>
#include <SeerSourceLibraryManagerWidget.h>
#include <SeerStackManagerWidget.h>
#include <SeerThreadManagerWidget.h>
#include <SeerVariableManagerWidget.h>

QT_BEGIN_NAMESPACE

class Ui_GdbWidget
{
public:
    QGridLayout *gridLayout;
    QSplitter *leftCenterRightSplitter;
    QSplitter *sourceLibraryVariableManagerSplitter;
    SeerSourceLibraryManagerWidget *sourceLibraryManagerWidget;
    SeerVariableManagerWidget *variableManagerWidget;
    QSplitter *codeManagerLogTabsSplitter;
    SeerEditorManagerWidget *editorManagerWidget;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QComboBox *manualCommandComboBox;
    QDetachTabWidget *logsTabWidget;
    QSplitter *stackThreadManagerSplitter;
    SeerStackManagerWidget *stackManagerWidget;
    SeerThreadManagerWidget *threadManagerWidget;

    void setupUi(QWidget *GdbWidget)
    {
        if (GdbWidget->objectName().isEmpty())
            GdbWidget->setObjectName(QString::fromUtf8("GdbWidget"));
        GdbWidget->resize(997, 566);
        gridLayout = new QGridLayout(GdbWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        leftCenterRightSplitter = new QSplitter(GdbWidget);
        leftCenterRightSplitter->setObjectName(QString::fromUtf8("leftCenterRightSplitter"));
        leftCenterRightSplitter->setOrientation(Qt::Horizontal);
        sourceLibraryVariableManagerSplitter = new QSplitter(leftCenterRightSplitter);
        sourceLibraryVariableManagerSplitter->setObjectName(QString::fromUtf8("sourceLibraryVariableManagerSplitter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(20);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sourceLibraryVariableManagerSplitter->sizePolicy().hasHeightForWidth());
        sourceLibraryVariableManagerSplitter->setSizePolicy(sizePolicy);
        sourceLibraryVariableManagerSplitter->setMinimumSize(QSize(1, 0));
        sourceLibraryVariableManagerSplitter->setOrientation(Qt::Vertical);
        sourceLibraryManagerWidget = new SeerSourceLibraryManagerWidget(sourceLibraryVariableManagerSplitter);
        sourceLibraryManagerWidget->setObjectName(QString::fromUtf8("sourceLibraryManagerWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(50);
        sizePolicy1.setHeightForWidth(sourceLibraryManagerWidget->sizePolicy().hasHeightForWidth());
        sourceLibraryManagerWidget->setSizePolicy(sizePolicy1);
        sourceLibraryVariableManagerSplitter->addWidget(sourceLibraryManagerWidget);
        variableManagerWidget = new SeerVariableManagerWidget(sourceLibraryVariableManagerSplitter);
        variableManagerWidget->setObjectName(QString::fromUtf8("variableManagerWidget"));
        sizePolicy1.setHeightForWidth(variableManagerWidget->sizePolicy().hasHeightForWidth());
        variableManagerWidget->setSizePolicy(sizePolicy1);
        sourceLibraryVariableManagerSplitter->addWidget(variableManagerWidget);
        leftCenterRightSplitter->addWidget(sourceLibraryVariableManagerSplitter);
        codeManagerLogTabsSplitter = new QSplitter(leftCenterRightSplitter);
        codeManagerLogTabsSplitter->setObjectName(QString::fromUtf8("codeManagerLogTabsSplitter"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(60);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(codeManagerLogTabsSplitter->sizePolicy().hasHeightForWidth());
        codeManagerLogTabsSplitter->setSizePolicy(sizePolicy2);
        codeManagerLogTabsSplitter->setOrientation(Qt::Vertical);
        editorManagerWidget = new SeerEditorManagerWidget(codeManagerLogTabsSplitter);
        editorManagerWidget->setObjectName(QString::fromUtf8("editorManagerWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(20);
        sizePolicy3.setVerticalStretch(75);
        sizePolicy3.setHeightForWidth(editorManagerWidget->sizePolicy().hasHeightForWidth());
        editorManagerWidget->setSizePolicy(sizePolicy3);
        codeManagerLogTabsSplitter->addWidget(editorManagerWidget);
        layoutWidget_2 = new QWidget(codeManagerLogTabsSplitter);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        manualCommandComboBox = new QComboBox(layoutWidget_2);
        manualCommandComboBox->setObjectName(QString::fromUtf8("manualCommandComboBox"));
        manualCommandComboBox->setEditable(true);

        verticalLayout->addWidget(manualCommandComboBox);

        logsTabWidget = new QDetachTabWidget(layoutWidget_2);
        logsTabWidget->setObjectName(QString::fromUtf8("logsTabWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(25);
        sizePolicy4.setHeightForWidth(logsTabWidget->sizePolicy().hasHeightForWidth());
        logsTabWidget->setSizePolicy(sizePolicy4);

        verticalLayout->addWidget(logsTabWidget);

        codeManagerLogTabsSplitter->addWidget(layoutWidget_2);
        leftCenterRightSplitter->addWidget(codeManagerLogTabsSplitter);
        stackThreadManagerSplitter = new QSplitter(leftCenterRightSplitter);
        stackThreadManagerSplitter->setObjectName(QString::fromUtf8("stackThreadManagerSplitter"));
        sizePolicy.setHeightForWidth(stackThreadManagerSplitter->sizePolicy().hasHeightForWidth());
        stackThreadManagerSplitter->setSizePolicy(sizePolicy);
        stackThreadManagerSplitter->setOrientation(Qt::Vertical);
        stackManagerWidget = new SeerStackManagerWidget(stackThreadManagerSplitter);
        stackManagerWidget->setObjectName(QString::fromUtf8("stackManagerWidget"));
        sizePolicy1.setHeightForWidth(stackManagerWidget->sizePolicy().hasHeightForWidth());
        stackManagerWidget->setSizePolicy(sizePolicy1);
        stackThreadManagerSplitter->addWidget(stackManagerWidget);
        threadManagerWidget = new SeerThreadManagerWidget(stackThreadManagerSplitter);
        threadManagerWidget->setObjectName(QString::fromUtf8("threadManagerWidget"));
        sizePolicy1.setHeightForWidth(threadManagerWidget->sizePolicy().hasHeightForWidth());
        threadManagerWidget->setSizePolicy(sizePolicy1);
        stackThreadManagerSplitter->addWidget(threadManagerWidget);
        leftCenterRightSplitter->addWidget(stackThreadManagerSplitter);

        gridLayout->addWidget(leftCenterRightSplitter, 0, 0, 1, 1);


        retranslateUi(GdbWidget);

        QMetaObject::connectSlotsByName(GdbWidget);
    } // setupUi

    void retranslateUi(QWidget *GdbWidget)
    {
        GdbWidget->setWindowTitle(QApplication::translate("GdbWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GdbWidget: public Ui_GdbWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GDBWIDGET_H
