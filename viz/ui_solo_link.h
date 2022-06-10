/********************************************************************************
** Form generated from reading UI file 'solo_link.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLO_LINK_H
#define UI_SOLO_LINK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Solo_link
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *headEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *linkEdit;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Solo_link)
    {
        if (Solo_link->objectName().isEmpty())
            Solo_link->setObjectName(QStringLiteral("Solo_link"));
        Solo_link->resize(795, 506);
        gridLayout = new QGridLayout(Solo_link);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(Solo_link);
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
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        graphicsView = new QGraphicsView(frame);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setStyleSheet(QStringLiteral("background-color:rgb(244, 244, 244)"));

        horizontalLayout->addWidget(graphicsView);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        headEdit = new QLineEdit(frame);
        headEdit->setObjectName(QStringLiteral("headEdit"));

        horizontalLayout_2->addWidget(headEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        linkEdit = new QLineEdit(frame);
        linkEdit->setObjectName(QStringLiteral("linkEdit"));

        horizontalLayout_2->addWidget(linkEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(80, 0));
        pushButton->setFont(font);

        horizontalLayout_2->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(24, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(20, 20));
        pushButton_2->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(20, 20));

        horizontalLayout_3->addWidget(pushButton_3);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Solo_link);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Solo_link, SLOT(showMinimized()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Solo_link, SLOT(close()));

        QMetaObject::connectSlotsByName(Solo_link);
    } // setupUi

    void retranslateUi(QDialog *Solo_link)
    {
        Solo_link->setWindowTitle(QApplication::translate("Solo_link", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Solo_link", "\345\244\264\350\212\202\347\202\271", Q_NULLPTR));
        label_2->setText(QApplication::translate("Solo_link", "\345\220\216\347\273\247\346\214\207\351\222\210", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Solo_link", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Solo_link", "-", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Solo_link", "\303\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Solo_link: public Ui_Solo_link {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLO_LINK_H
