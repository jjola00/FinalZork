#include "exitwindow.h"
#include "ui_exitwindow.h"
#include <QPixmap>
#include <QCoreApplication>
#include <QDir>
#include <QFileInfo>

using namespace std;
namespace {
static QString findAsset(const QString &fileName) {
    QStringList candidates;
    const QString exeDir = QCoreApplication::applicationDirPath();
    candidates << exeDir + "/" + fileName;
    candidates << exeDir + "/../" + fileName;
    candidates << exeDir + "/../../" + fileName;
    candidates << exeDir + "/../assets/" + fileName;
    candidates << exeDir + "/../../assets/" + fileName;
    candidates << QDir::currentPath() + "/" + fileName;
    candidates << QDir::currentPath() + "/assets/" + fileName;
    candidates << QDir::currentPath() + "/../assets/" + fileName;
    candidates << fileName;
    for (const QString &path : candidates) {
        QFileInfo fi(path);
        if (fi.exists() && fi.isFile()) return fi.absoluteFilePath();
    }
    return fileName;
}
}

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
    QString bgImage = findAsset("item.png");
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

