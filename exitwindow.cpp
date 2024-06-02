#include "exitwindow.h"
#include "ui_exitwindow.h"

using namespace std;

ExitWindow::ExitWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExitWindow)
{
    ui->setupUi(this);
    setWindowTitle("Null Exit");
}

ExitWindow::~ExitWindow()
{
    delete ui;
}

void ExitWindow::noExit(){
    QString bgImage = QString("C:/Users/23373326/MyRepos/Zorkers/item.png");
    QPixmap pix(bgImage);
    ui->exitBg->setPixmap(pix);
    ui->exitBg->lower();

    string exitWarning = "You cannot go this way!";
    QString exitString = QString::fromStdString(exitWarning);
    ui->exitText->setText(exitString);

    ui->exitText->setReadOnly(true);
    ui->exitText->setStyleSheet("background-color: transparent; color: black; font-family: STLiti; font-size: 19pt; border: none;");

    ui->exitText->show();
}

