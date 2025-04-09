#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_plus_clicked();

    void on_pushButton_equals_clicked();

    void on_pushButton_subtraction_clicked();

    void on_pushButton_multiplication_clicked();

    void on_pushButton_derivation_clicked();

    void on_pushButton_erase_clicked();

    void onDigitButtonClicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
