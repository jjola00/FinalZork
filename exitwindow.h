#ifndef EXITWINDOW_H
#define EXITWINDOW_H

#include <QDialog>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class ExitWindow; }
QT_END_NAMESPACE

class MainWindow;

class ExitWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ExitWindow(QWidget *parent = nullptr);
    ~ExitWindow();

    void printExits();

private:
    Ui::ExitWindow *ui;

    friend class MainWindow;
};

#endif
