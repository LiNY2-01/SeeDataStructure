/********************************************************************************
** Form generated from reading UI file 'SeerSourceConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERSOURCECONFIGPAGE_H
#define UI_SEERSOURCECONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerSourceConfigPage
{
public:
    QGridLayout *gridLayout;
    QToolButton *addDirectoryToolButton;
    QToolButton *moveUpDirectoriesToolButton;
    QToolButton *moveDownDirectoriesToolButton;
    QToolButton *deleteDirectoriesToolButton;
    QSpacerItem *verticalSpacer;
    QTextBrowser *textBrowser;
    QTreeWidget *directoriesTreeWidget;

    void setupUi(QWidget *SeerSourceConfigPage)
    {
        if (SeerSourceConfigPage->objectName().isEmpty())
            SeerSourceConfigPage->setObjectName(QString::fromUtf8("SeerSourceConfigPage"));
        SeerSourceConfigPage->resize(728, 445);
        gridLayout = new QGridLayout(SeerSourceConfigPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        addDirectoryToolButton = new QToolButton(SeerSourceConfigPage);
        addDirectoryToolButton->setObjectName(QString::fromUtf8("addDirectoryToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addDirectoryToolButton->setIcon(icon);

        gridLayout->addWidget(addDirectoryToolButton, 0, 1, 1, 1);

        moveUpDirectoriesToolButton = new QToolButton(SeerSourceConfigPage);
        moveUpDirectoriesToolButton->setObjectName(QString::fromUtf8("moveUpDirectoriesToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/up_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveUpDirectoriesToolButton->setIcon(icon1);

        gridLayout->addWidget(moveUpDirectoriesToolButton, 1, 1, 1, 1);

        moveDownDirectoriesToolButton = new QToolButton(SeerSourceConfigPage);
        moveDownDirectoriesToolButton->setObjectName(QString::fromUtf8("moveDownDirectoriesToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/down_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveDownDirectoriesToolButton->setIcon(icon2);

        gridLayout->addWidget(moveDownDirectoriesToolButton, 2, 1, 1, 1);

        deleteDirectoriesToolButton = new QToolButton(SeerSourceConfigPage);
        deleteDirectoriesToolButton->setObjectName(QString::fromUtf8("deleteDirectoriesToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/edit-delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        deleteDirectoriesToolButton->setIcon(icon3);

        gridLayout->addWidget(deleteDirectoriesToolButton, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        textBrowser = new QTextBrowser(SeerSourceConfigPage);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textBrowser, 5, 0, 1, 2);

        directoriesTreeWidget = new QTreeWidget(SeerSourceConfigPage);
        directoriesTreeWidget->setObjectName(QString::fromUtf8("directoriesTreeWidget"));
        sizePolicy.setHeightForWidth(directoriesTreeWidget->sizePolicy().hasHeightForWidth());
        directoriesTreeWidget->setSizePolicy(sizePolicy);
        directoriesTreeWidget->setRootIsDecorated(false);

        gridLayout->addWidget(directoriesTreeWidget, 0, 0, 5, 1);


        retranslateUi(SeerSourceConfigPage);

        QMetaObject::connectSlotsByName(SeerSourceConfigPage);
    } // setupUi

    void retranslateUi(QWidget *SeerSourceConfigPage)
    {
        SeerSourceConfigPage->setWindowTitle(QApplication::translate("SeerSourceConfigPage", "SeerSourceConfigPage", nullptr));
#ifndef QT_NO_TOOLTIP
        addDirectoryToolButton->setToolTip(QApplication::translate("SeerSourceConfigPage", "Add a new directory.", nullptr));
#endif // QT_NO_TOOLTIP
        addDirectoryToolButton->setText(QApplication::translate("SeerSourceConfigPage", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        moveUpDirectoriesToolButton->setToolTip(QApplication::translate("SeerSourceConfigPage", "Move up selected directories.", nullptr));
#endif // QT_NO_TOOLTIP
        moveUpDirectoriesToolButton->setText(QApplication::translate("SeerSourceConfigPage", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        moveDownDirectoriesToolButton->setToolTip(QApplication::translate("SeerSourceConfigPage", "Move down selected directories.", nullptr));
#endif // QT_NO_TOOLTIP
        moveDownDirectoriesToolButton->setText(QApplication::translate("SeerSourceConfigPage", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        deleteDirectoriesToolButton->setToolTip(QApplication::translate("SeerSourceConfigPage", "Delete selected directories.", nullptr));
#endif // QT_NO_TOOLTIP
        deleteDirectoriesToolButton->setText(QApplication::translate("SeerSourceConfigPage", "...", nullptr));
        textBrowser->setHtml(QApplication::translate("SeerSourceConfigPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:600;\">Specify alternate directories for locating source files.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt;\">If Se"
                        "er can't find the source file in the directory that gdb knows of, then Seer will look in these directories in the order they appear.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt;\">If Seer still can't find the source file, it will prompt you to enter the location.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt;\">Select single or"
                        " multiple entries in the list to move up, move down, or delete.</span></p></body></html>", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = directoriesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerSourceConfigPage", "Directories", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerSourceConfigPage: public Ui_SeerSourceConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERSOURCECONFIGPAGE_H
