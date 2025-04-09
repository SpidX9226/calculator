#include "mainwindow.h"
#include "./ui_mainwindow.h"

static QString calc_str("");

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_one_clicked()
{
    calc_str.append("1");
    ui->label_calc->setText(calc_str);
}

void MainWindow::on_pushButton_two_clicked()
{
    calc_str.append("2");
    ui->label_calc->setText(calc_str);
}


void MainWindow::on_pushButton_three_clicked()
{
    calc_str.append("3");
    ui->label_calc->setText(calc_str);
}


void MainWindow::on_pushButton_four_clicked()
{
    calc_str.append("4");
    ui->label_calc->setText(calc_str);
}


void MainWindow::on_pushButton_five_clicked()
{
    calc_str.append("5");
    ui->label_calc->setText(calc_str);
}


void MainWindow::on_pushButton_six_clicked()
{
    calc_str.append("6");
    ui->label_calc->setText(calc_str);
}


void MainWindow::on_pushButton_seven_clicked()
{
    calc_str.append("7");
    ui->label_calc->setText(calc_str);
}


void MainWindow::on_pushButton_eight_clicked()
{
    calc_str.append("8");
    ui->label_calc->setText(calc_str);
}


void MainWindow::on_pushButton_nine_clicked()
{
    calc_str.append("9");
    ui->label_calc->setText(calc_str);
}


void MainWindow::on_pushButton_zero_clicked()
{
    calc_str.append("0");
    ui->label_calc->setText(calc_str);
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

