#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_pushButton_Minus_clicked();
    void on_pushButton_Plus_clicked();
    void on_pushButton_Equal_clicked();
    void on_pushButton_Multiply_clicked();
    void on_pushButton_Divide_clicked();
    void on_pushButton_AC_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();

private:
    Ui::Calculator *ui;
    char Operator = '\0';
    double Operand1 = 0.0;
    double Operand2 = 0.0;
    double Total = 0.0;
};
#endif // CALCULATOR_H
