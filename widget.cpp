#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnegale_clicked()
{
    qint32 resultat;
    qint8 opperation = ui->opp->currentIndex();

    switch (opperation) {
    case 0:
        resultat = ui->val1->value() + ui->val2->value();

        break;
    case 1:
        resultat = ui->val1->value() - ui->val2->value();

        break;
    case 2:
        resultat = ui->val1->value() * ui->val2->value();

        break;
    case 3:
        resultat = ui->val1->value() / ui->val2->value();

        break;

    }

    ui->result->setText(QString::number(resultat));
}


