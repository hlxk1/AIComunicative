#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtDebug>
#include "registform.h"
namespace Ui {
class loginForm;
}

class loginForm : public QWidget
{
    Q_OBJECT

public:
    explicit loginForm(QWidget *parent = nullptr);
    ~loginForm();

private slots:
    void on_pushButton_2_clicked();

    void on_registButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::loginForm *ui;
};

#endif // LOGINFORM_H
