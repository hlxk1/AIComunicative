#ifndef REGISTFORM_H
#define REGISTFORM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtDebug>
namespace Ui {
class RegistForm;
}

class RegistForm : public QWidget
{
    Q_OBJECT

public:
    explicit RegistForm(QWidget *parent = nullptr);
    ~RegistForm();

private slots:
    void on_registButton_clicked();

private:
    Ui::RegistForm *ui;
};

#endif // REGISTFORM_H
