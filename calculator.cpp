#include "calculator.h"
#include "./ui_calculator.h"
#include <iostream>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_pushButton_1_clicked()
{
    if (Operand1 == 0.0){
        Operand1 = 1;
    } else if (Operand2 == 0.0){
        Operand2 = 1;
    }
}

void Calculator::on_pushButton_2_clicked()
{
    if (Operand1 == 0.0){
        Operand1 = 2;
    } else if (Operand2 == 0.0){
        Operand2 = 2;
    }
}

void Calculator::on_pushButton_3_clicked()
{
    if (Operand1 == 0.0){
        Operand1 = 3;
    } else if (Operand2 == 0.0){
        Operand2 = 3;
    }
}
void Calculator::on_pushButton_4_clicked()
{
    if (Operand1 == 0.0){
        Operand1 = 4;
    } else if (Operand2 == 0.0){
        Operand2 = 4;
    }
}

void Calculator::on_pushButton_5_clicked()
{
    if (Operand1 == 0.0){
        Operand1 = 5;
    } else if (Operand2 == 0.0){
        Operand2 = 5;
    }
}

void Calculator::on_pushButton_6_clicked()
{
    if (Operand1 == 0.0){
        Operand1 = 6;
    } else if (Operand2 == 0.0){
        Operand2 = 6;
    }
}

void Calculator::on_pushButton_7_clicked()
{
    if (Operand1 == 0.0){
        Operand1 = 7;
    } else if (Operand2 == 0.0){
        Operand2 = 7;
    }
}

void Calculator::on_pushButton_8_clicked()
{
    if (Operand1 == 0.0){
        Operand1 = 8;
    } else if (Operand2 == 0.0){
        Operand2 = 8;
    }
}

void Calculator::on_pushButton_9_clicked()
{
    if (Operand1 == 0.0){
        Operand1 = 9;
    } else if (Operand2 == 0.0){
        Operand2 = 9;
    }
}

void Calculator::on_pushButton_Plus_clicked()
{
    Operator = '+';
}

void Calculator::on_pushButton_Minus_clicked()
{
    Operator = '-';
}

void Calculator::on_pushButton_Multiply_clicked()
{
    Operator = '*';
}

void Calculator::on_pushButton_Divide_clicked()
{
    Operator = '/';
}

void Calculator::on_pushButton_Equal_clicked()
{
    switch (Operator){
    case '+':
        Total = Operand1 + Operand2;
        break;
    case '-':
        Total = Operand1 - Operand2;
        break;
    case '*':
        Total = Operand1 * Operand2;
        break;
    case '/':
        Total = Operand1 / Operand2;
        break;
    }
    std::cout << Total << std::endl;
    ui->lcdNumber->display(Total);
    Operand1 = 0.0;
    Operand2 = 0.0;
    Operator = '\0';
}

void Calculator::on_pushButton_AC_clicked()
{
    Total = 0.0;
    ui->lcdNumber->display(Total);
    Operand1 = 0.0;
    Operand2 = 0.0;
    Operator = '\0';
}
