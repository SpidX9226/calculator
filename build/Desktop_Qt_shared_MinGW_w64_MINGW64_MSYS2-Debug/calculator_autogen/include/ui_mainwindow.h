/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_two;
    QPushButton *pushButton_three;
    QPushButton *pushButton_one;
    QPushButton *pushButton_four;
    QPushButton *pushButton_five;
    QPushButton *pushButton_six;
    QPushButton *pushButton_seven;
    QPushButton *pushButton_eight;
    QPushButton *pushButton_nine;
    QPushButton *pushButton_zero;
    QLabel *label_calc;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_subtraction;
    QPushButton *pushButton_multiplication;
    QPushButton *pushButton_derivation;
    QPushButton *pushButton_nine_point;
    QPushButton *pushButton_erase;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1049, 998);
        MainWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_two = new QPushButton(centralwidget);
        pushButton_two->setObjectName("pushButton_two");
        pushButton_two->setGeometry(QRect(450, 450, 80, 80));
        pushButton_two->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_three = new QPushButton(centralwidget);
        pushButton_three->setObjectName("pushButton_three");
        pushButton_three->setGeometry(QRect(540, 450, 80, 80));
        pushButton_three->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_one = new QPushButton(centralwidget);
        pushButton_one->setObjectName("pushButton_one");
        pushButton_one->setGeometry(QRect(360, 450, 80, 80));
        pushButton_one->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_four = new QPushButton(centralwidget);
        pushButton_four->setObjectName("pushButton_four");
        pushButton_four->setGeometry(QRect(360, 540, 80, 80));
        pushButton_four->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_five = new QPushButton(centralwidget);
        pushButton_five->setObjectName("pushButton_five");
        pushButton_five->setGeometry(QRect(450, 540, 80, 80));
        pushButton_five->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_six = new QPushButton(centralwidget);
        pushButton_six->setObjectName("pushButton_six");
        pushButton_six->setGeometry(QRect(540, 540, 80, 80));
        pushButton_six->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_seven = new QPushButton(centralwidget);
        pushButton_seven->setObjectName("pushButton_seven");
        pushButton_seven->setGeometry(QRect(360, 630, 80, 80));
        pushButton_seven->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_eight = new QPushButton(centralwidget);
        pushButton_eight->setObjectName("pushButton_eight");
        pushButton_eight->setGeometry(QRect(450, 630, 80, 80));
        pushButton_eight->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_nine = new QPushButton(centralwidget);
        pushButton_nine->setObjectName("pushButton_nine");
        pushButton_nine->setGeometry(QRect(540, 630, 80, 80));
        pushButton_nine->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_zero = new QPushButton(centralwidget);
        pushButton_zero->setObjectName("pushButton_zero");
        pushButton_zero->setGeometry(QRect(450, 720, 80, 80));
        pushButton_zero->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_calc = new QLabel(centralwidget);
        label_calc->setObjectName("label_calc");
        label_calc->setGeometry(QRect(360, 350, 261, 80));
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        label_calc->setFont(font);
        label_calc->setFrameShape(QFrame::Panel);
        label_calc->setAlignment(Qt::AlignCenter);
        label_calc->setMargin(10);
        pushButton_equals = new QPushButton(centralwidget);
        pushButton_equals->setObjectName("pushButton_equals");
        pushButton_equals->setGeometry(QRect(540, 720, 80, 80));
        pushButton_equals->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");
        pushButton_plus->setGeometry(QRect(360, 720, 80, 80));
        pushButton_plus->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_subtraction = new QPushButton(centralwidget);
        pushButton_subtraction->setObjectName("pushButton_subtraction");
        pushButton_subtraction->setGeometry(QRect(630, 450, 80, 80));
        pushButton_subtraction->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_multiplication = new QPushButton(centralwidget);
        pushButton_multiplication->setObjectName("pushButton_multiplication");
        pushButton_multiplication->setGeometry(QRect(630, 540, 80, 80));
        pushButton_multiplication->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_derivation = new QPushButton(centralwidget);
        pushButton_derivation->setObjectName("pushButton_derivation");
        pushButton_derivation->setGeometry(QRect(630, 630, 80, 80));
        pushButton_derivation->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_nine_point = new QPushButton(centralwidget);
        pushButton_nine_point->setObjectName("pushButton_nine_point");
        pushButton_nine_point->setGeometry(QRect(630, 720, 80, 80));
        pushButton_nine_point->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_erase = new QPushButton(centralwidget);
        pushButton_erase->setObjectName("pushButton_erase");
        pushButton_erase->setGeometry(QRect(630, 350, 80, 80));
        pushButton_erase->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1049, 22));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_calc->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        pushButton_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_subtraction->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_multiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_derivation->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_nine_point->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        pushButton_erase->setText(QCoreApplication::translate("MainWindow", "<=", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\277\320\276\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
