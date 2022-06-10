/********************************************************************************
** Form generated from reading UI file 'struct_view.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRUCT_VIEW_H
#define UI_STRUCT_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Struct_view
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Struct_view)
    {
        if (Struct_view->objectName().isEmpty())
            Struct_view->setObjectName(QString::fromUtf8("Struct_view"));
        Struct_view->resize(829, 566);
        gridLayout = new QGridLayout(Struct_view);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(Struct_view);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 254, 254);\n"
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
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        graphicsView = new QGraphicsView(frame);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color:rgb(244, 244, 244)"));

        gridLayout_2->addWidget(graphicsView, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(24, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(20, 20));
        pushButton_2->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_3);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Struct_view);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Struct_view, SLOT(showMinimized()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Struct_view, SLOT(close()));

        QMetaObject::connectSlotsByName(Struct_view);
    } // setupUi

    void retranslateUi(QDialog *Struct_view)
    {
        Struct_view->setWindowTitle(QApplication::translate("Struct_view", "Dialog", nullptr));
        label->setText(QApplication::translate("Struct_view", "\347\273\223\346\236\204\350\247\206\345\233\276", nullptr));
        pushButton_2->setText(QApplication::translate("Struct_view", "-", nullptr));
        pushButton_3->setText(QApplication::translate("Struct_view", "\303\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Struct_view: public Ui_Struct_view {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRUCT_VIEW_H
