#include "registform.h"
#include "ui_registform.h"

RegistForm::RegistForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegistForm)
{
    ui->setupUi(this);
}

RegistForm::~RegistForm()
{
    delete ui;
}

void RegistForm::on_registButton_clicked()
{
    QSqlQuery query;
    if(ui->passwdEdit->text()==ui->ackpasswdEdit->text()){
        QString insertManeger = QString("INSERT INTO maneger (username,password) VALUES ('%1','%2')")
                .arg(ui->usernameEdit->text()).arg(ui->passwdEdit->text());
        if(!query.exec(insertManeger)){
            qDebug()<<"插入数据失败";
        }else{
            this->close();
        }
    }else{
        qDebug()<<"两次密码输入不一致，请重新输入";
    }

}
