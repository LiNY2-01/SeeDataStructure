/********************************************************************************
** Form generated from reading UI file 'SeerEditorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEREDITORWIDGET_H
#define UI_SEEREDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <SeerEditorWidget.h>

QT_BEGIN_NAMESPACE

class Ui_SeerEditorWidgetForm
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *alternateBarLayout;
    QToolButton *alternateAddToGlobalToolButton;
    QLabel *alternateLabel;
    QToolButton *alternateCloseToolButton;
    QFrame *line_3;
    QLineEdit *alternateLineEdit;
    QToolButton *alternateFileOpenToolButton;
    SeerEditorWidgetSourceArea *sourceWidget;
    QHBoxLayout *searchBarLayout;
    QLineEdit *searchTextLineEdit;
    QCheckBox *matchCaseCheckBox;
    QLabel *matchesLabel;
    QToolButton *searchDownToolButton;
    QToolButton *searchUpToolButton;
    QFrame *line_1;
    QLineEdit *searchLineNumberLineEdit;
    QFrame *line_2;
    QToolButton *searchCloseToolButton;

    void setupUi(QWidget *SeerEditorWidgetForm)
    {
        if (SeerEditorWidgetForm->objectName().isEmpty())
            SeerEditorWidgetForm->setObjectName(QString::fromUtf8("SeerEditorWidgetForm"));
        SeerEditorWidgetForm->resize(838, 720);
        verticalLayout = new QVBoxLayout(SeerEditorWidgetForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        alternateBarLayout = new QGridLayout();
        alternateBarLayout->setObjectName(QString::fromUtf8("alternateBarLayout"));
        alternateAddToGlobalToolButton = new QToolButton(SeerEditorWidgetForm);
        alternateAddToGlobalToolButton->setObjectName(QString::fromUtf8("alternateAddToGlobalToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        alternateAddToGlobalToolButton->setIcon(icon);

        alternateBarLayout->addWidget(alternateAddToGlobalToolButton, 1, 3, 1, 1);

        alternateLabel = new QLabel(SeerEditorWidgetForm);
        alternateLabel->setObjectName(QString::fromUtf8("alternateLabel"));

        alternateBarLayout->addWidget(alternateLabel, 0, 0, 1, 5);

        alternateCloseToolButton = new QToolButton(SeerEditorWidgetForm);
        alternateCloseToolButton->setObjectName(QString::fromUtf8("alternateCloseToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        alternateCloseToolButton->setIcon(icon1);

        alternateBarLayout->addWidget(alternateCloseToolButton, 1, 4, 1, 1);

        line_3 = new QFrame(SeerEditorWidgetForm);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        alternateBarLayout->addWidget(line_3, 1, 2, 1, 1);

        alternateLineEdit = new QLineEdit(SeerEditorWidgetForm);
        alternateLineEdit->setObjectName(QString::fromUtf8("alternateLineEdit"));
        alternateLineEdit->setClearButtonEnabled(true);

        alternateBarLayout->addWidget(alternateLineEdit, 1, 0, 1, 1);

        alternateFileOpenToolButton = new QToolButton(SeerEditorWidgetForm);
        alternateFileOpenToolButton->setObjectName(QString::fromUtf8("alternateFileOpenToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        alternateFileOpenToolButton->setIcon(icon2);

        alternateBarLayout->addWidget(alternateFileOpenToolButton, 1, 1, 1, 1);


        verticalLayout->addLayout(alternateBarLayout);

        sourceWidget = new SeerEditorWidgetSourceArea(SeerEditorWidgetForm);
        sourceWidget->setObjectName(QString::fromUtf8("sourceWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(sourceWidget->sizePolicy().hasHeightForWidth());
        sourceWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(sourceWidget);

        searchBarLayout = new QHBoxLayout();
        searchBarLayout->setObjectName(QString::fromUtf8("searchBarLayout"));
        searchTextLineEdit = new QLineEdit(SeerEditorWidgetForm);
        searchTextLineEdit->setObjectName(QString::fromUtf8("searchTextLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(80);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchTextLineEdit->sizePolicy().hasHeightForWidth());
        searchTextLineEdit->setSizePolicy(sizePolicy1);
        searchTextLineEdit->setClearButtonEnabled(true);

        searchBarLayout->addWidget(searchTextLineEdit);

        matchCaseCheckBox = new QCheckBox(SeerEditorWidgetForm);
        matchCaseCheckBox->setObjectName(QString::fromUtf8("matchCaseCheckBox"));

        searchBarLayout->addWidget(matchCaseCheckBox);

        matchesLabel = new QLabel(SeerEditorWidgetForm);
        matchesLabel->setObjectName(QString::fromUtf8("matchesLabel"));

        searchBarLayout->addWidget(matchesLabel);

        searchDownToolButton = new QToolButton(SeerEditorWidgetForm);
        searchDownToolButton->setObjectName(QString::fromUtf8("searchDownToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/seer/resources/RelaxLightIcons/go-down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchDownToolButton->setIcon(icon3);

        searchBarLayout->addWidget(searchDownToolButton);

        searchUpToolButton = new QToolButton(SeerEditorWidgetForm);
        searchUpToolButton->setObjectName(QString::fromUtf8("searchUpToolButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/seer/resources/RelaxLightIcons/go-up.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchUpToolButton->setIcon(icon4);

        searchBarLayout->addWidget(searchUpToolButton);

        line_1 = new QFrame(SeerEditorWidgetForm);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        line_1->setFrameShape(QFrame::VLine);
        line_1->setFrameShadow(QFrame::Sunken);

        searchBarLayout->addWidget(line_1);

        searchLineNumberLineEdit = new QLineEdit(SeerEditorWidgetForm);
        searchLineNumberLineEdit->setObjectName(QString::fromUtf8("searchLineNumberLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(20);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(searchLineNumberLineEdit->sizePolicy().hasHeightForWidth());
        searchLineNumberLineEdit->setSizePolicy(sizePolicy2);

        searchBarLayout->addWidget(searchLineNumberLineEdit);

        line_2 = new QFrame(SeerEditorWidgetForm);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        searchBarLayout->addWidget(line_2);

        searchCloseToolButton = new QToolButton(SeerEditorWidgetForm);
        searchCloseToolButton->setObjectName(QString::fromUtf8("searchCloseToolButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/seer/resources/RelaxLightIcons/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchCloseToolButton->setIcon(icon5);

        searchBarLayout->addWidget(searchCloseToolButton);


        verticalLayout->addLayout(searchBarLayout);


        retranslateUi(SeerEditorWidgetForm);

        QMetaObject::connectSlotsByName(SeerEditorWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerEditorWidgetForm)
    {
        SeerEditorWidgetForm->setWindowTitle(QApplication::translate("SeerEditorWidgetForm", "SeerEditorWidgetForm", nullptr));
#ifndef QT_NO_TOOLTIP
        alternateAddToGlobalToolButton->setToolTip(QApplication::translate("SeerEditorWidgetForm", "Add path to global list of alternate directories.", nullptr));
#endif // QT_NO_TOOLTIP
        alternateAddToGlobalToolButton->setText(QApplication::translate("SeerEditorWidgetForm", "...", nullptr));
        alternateLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        alternateCloseToolButton->setToolTip(QApplication::translate("SeerEditorWidgetForm", "Close the alternate bar.", nullptr));
#endif // QT_NO_TOOLTIP
        alternateCloseToolButton->setText(QApplication::translate("SeerEditorWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        alternateLineEdit->setToolTip(QApplication::translate("SeerEditorWidgetForm", "Enter path for alternate location.", nullptr));
#endif // QT_NO_TOOLTIP
        alternateLineEdit->setPlaceholderText(QApplication::translate("SeerEditorWidgetForm", "Enter /path/to/alternate/location", nullptr));
#ifndef QT_NO_TOOLTIP
        alternateFileOpenToolButton->setToolTip(QApplication::translate("SeerEditorWidgetForm", "Open file dialog for alternate location.", nullptr));
#endif // QT_NO_TOOLTIP
        alternateFileOpenToolButton->setText(QApplication::translate("SeerEditorWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        searchTextLineEdit->setToolTip(QApplication::translate("SeerEditorWidgetForm", "Enter text to search for.", nullptr));
#endif // QT_NO_TOOLTIP
        searchTextLineEdit->setPlaceholderText(QApplication::translate("SeerEditorWidgetForm", "Enter search text", nullptr));
        matchCaseCheckBox->setText(QApplication::translate("SeerEditorWidgetForm", "Match Case", nullptr));
        matchesLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        searchDownToolButton->setToolTip(QApplication::translate("SeerEditorWidgetForm", "Search for the next occurance.", nullptr));
#endif // QT_NO_TOOLTIP
        searchDownToolButton->setText(QApplication::translate("SeerEditorWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        searchUpToolButton->setToolTip(QApplication::translate("SeerEditorWidgetForm", "Search for the previous occurance.", nullptr));
#endif // QT_NO_TOOLTIP
        searchUpToolButton->setText(QApplication::translate("SeerEditorWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        searchLineNumberLineEdit->setToolTip(QApplication::translate("SeerEditorWidgetForm", "Scroll to a specific line.", nullptr));
#endif // QT_NO_TOOLTIP
        searchLineNumberLineEdit->setPlaceholderText(QApplication::translate("SeerEditorWidgetForm", "Go to line #", nullptr));
#ifndef QT_NO_TOOLTIP
        searchCloseToolButton->setToolTip(QApplication::translate("SeerEditorWidgetForm", "Close the search bar.", nullptr));
#endif // QT_NO_TOOLTIP
        searchCloseToolButton->setText(QApplication::translate("SeerEditorWidgetForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerEditorWidgetForm: public Ui_SeerEditorWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEREDITORWIDGET_H
