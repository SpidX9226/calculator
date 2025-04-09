#include "mainwindow.h"
#include "./ui_mainwindow.h"

static QString calc_str("");

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QList<QPushButton*> digitButtons = {
        ui->pushButton_zero, ui->pushButton_one, ui->pushButton_two,
        ui->pushButton_three, ui->pushButton_four, ui->pushButton_five,
        ui->pushButton_six, ui->pushButton_seven, ui->pushButton_eight,
        ui->pushButton_nine
    };

    for (QPushButton* button : digitButtons) {
        connect(button, &QPushButton::clicked, this, &MainWindow::onDigitButtonClicked);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onDigitButtonClicked(){
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (button) {
        calc_str.append(button->text());
        ui->label_calc->setText(calc_str);
    }
}

void MainWindow::on_pushButton_plus_clicked()
{
    calc_str.append(" + ");
    ui->label_calc->setText(calc_str);
}

void MainWindow::on_pushButton_subtraction_clicked()
{
    calc_str.append(" - ");
    ui->label_calc->setText(calc_str);
}

void MainWindow::on_pushButton_multiplication_clicked()
{
    calc_str.append(" * ");
    ui->label_calc->setText(calc_str);
}

void MainWindow::on_pushButton_derivation_clicked()
{
    calc_str.append(" / ");
    ui->label_calc->setText(calc_str);
}

void MainWindow::on_pushButton_equals_clicked()
{
    QString num_first_str;
    QString num_second_str;

    QChar operation;

    for (auto iter = calc_str.begin(); iter != (calc_str.end() - 1); ++iter) {
        if (*iter != ' ') {
            num_first_str.append(*iter);
        } else {
            operation = *(iter + 1);
            calc_str.erase(calc_str.begin(), (iter + 2));
            break;
        }
    }

    for (auto iter = calc_str.begin(); iter != (calc_str.end());) {
        num_second_str.append(*iter);
        iter = calc_str.erase(iter);
    }

    int first_num = num_first_str.toInt();
    int second_num = num_second_str.toInt();

    int result;

    switch (operation.toLatin1()) {
    case '+':
        result = first_num + second_num;
        break;
    case '-':
        result = first_num - second_num;
        break;
    case '*':
        result = first_num * second_num;
        break;
    case '/':
        if (second_num != 0) {
            result = first_num / second_num;
            break;
        } else {
            ui->label_calc->setText(QString("derivation by zero!"));
            return;
        }
    default:
        break;
    }

    ui->label_calc->setText(QString::number(result));
    calc_str = QString::number(result);
}

void MainWindow::on_pushButton_erase_clicked()
{
    calc_str.erase(calc_str.end() - 1);
    ui->label_calc->setText(calc_str);
}

