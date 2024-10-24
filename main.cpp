#include "mainwindow.h"
#include "loginform.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("aicommunity");
    if(db.open()){
        qDebug()<<"数据库创建成功";
    }else{
        qDebug()<<"数据库创建失败";
    }
    // 创建Maneger表
    QSqlQuery query;
    QString creatTabel="CREATE TABLE if not exists maneger("
                       "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                       "username TEXT NOT NULL,"
                       "password TEXT NOT NULL"
                       ");";
    if(!query.exec(creatTabel)){
        qDebug()<<"创建表失败";
    }
    loginForm w;
    w.show();
    return a.exec();
}
