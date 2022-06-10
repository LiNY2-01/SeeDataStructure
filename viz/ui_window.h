/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *struct_button;
    QPushButton *arr_button;
    QPushButton *solo_button;
    QPushButton *double_button;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QStringLiteral("Window"));
        Window->resize(825, 587);
        centralwidget = new QWidget(Window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(centralwidget);
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
        splitter = new QSplitter(frame);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(24, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(20, 20));
        pushButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButton_2);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        struct_button = new QPushButton(layoutWidget1);
        struct_button->setObjectName(QStringLiteral("struct_button"));

        verticalLayout->addWidget(struct_button);

        arr_button = new QPushButton(layoutWidget1);
        arr_button->setObjectName(QStringLiteral("arr_button"));

        verticalLayout->addWidget(arr_button);

        solo_button = new QPushButton(layoutWidget1);
        solo_button->setObjectName(QStringLiteral("solo_button"));

        verticalLayout->addWidget(solo_button);

        double_button = new QPushButton(layoutWidget1);
        double_button->setObjectName(QStringLiteral("double_button"));

        verticalLayout->addWidget(double_button);

        splitter->addWidget(layoutWidget1);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 1, 1, 1);

        Window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Window);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Window->setStatusBar(statusbar);

        retranslateUi(Window);
        QObject::connect(pushButton, SIGNAL(clicked()), Window, SLOT(showMinimized()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Window, SLOT(close()));

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Window", "-", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Window", "\303\227", Q_NULLPTR));
        struct_button->setText(QApplication::translate("Window", "\347\273\223\346\236\204\350\247\206\345\233\276", Q_NULLPTR));
        arr_button->setText(QApplication::translate("Window", "\351\200\232\347\224\250", Q_NULLPTR));
        solo_button->setText(QApplication::translate("Window", "\345\215\225\351\223\276\350\241\250", Q_NULLPTR));
        double_button->setText(QApplication::translate("Window", "\345\217\214\351\223\276\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
