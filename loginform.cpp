#include "loginform.h"
#include "ui_loginform.h"

loginForm::loginForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginForm)
{
    ui->setupUi(this);
}

loginForm::~loginForm()
{
    delete ui;
}
// 登录
void loginForm::on_pushButton_2_clicked()
{


}
// 打开注册页面
void loginForm::on_registButton_clicked()
{
    RegistForm *registform = new RegistForm;
    registform->show();
}

void loginForm::on_loginButton_clicked()
{
    QSqlQuery query;
    // 比对用户名密码
    QString passwd;
    QString sel = QString("select password from maneger where username='%1';")
            .arg(ui->usernameEdit->text());
    if(!query.exec(sel)){
        qDebug()<<"查询对应密码失败";
    }else{
        while (query.next()) {
            passwd = query.value("password").toString();
        }
    }
    if(passwd==ui->passwdEdit->text()){
        qDebug()<< "登录成功";
    }else{
        qDebug()<<"登录失败";
    }
}
