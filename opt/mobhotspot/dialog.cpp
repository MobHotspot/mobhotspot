#include "dialog.h"
#include "ui_dialog.h"
#include "wchar.h"
#include "QString"
#include "QProcess"



Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    Qt::WindowFlags flags = Qt::Window | Qt::WindowSystemMenuHint
                                | Qt::WindowMinimizeButtonHint
                                | Qt::WindowCloseButtonHint;
    this->setWindowFlags(flags);
    ui->setupUi(this);
    //static QString ssid;
    //ssid = system("grep ssid /etc/hostapd.conf");
    //ui->label->setText(ssid);
        // Set signal and slot for "OK Button"
       // connect(pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    //this->setGeometry(50,50, 1280, 768);
   // setWindowState(Qt::WindowMaximized);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    //static QString ssid;
    //ssid = ssid.toAscii();
    //std::string ssid;
    //QComboBox *ssid;

        system("cd /opt/mobhotspot/connection/ && ./start.ihs");
      //  ssid = system("grep ssid /etc/hostapd.conf");
        //ssid = ssid.toLatin1();

        //ui->label->setText(QString::number(count));
        //ui->label->setText(ssid);
       // ui->label->

        QProcess process;
        process.start("grep ssid /etc/hostapd.conf");
        process.waitForFinished();
        QByteArray out = process.readAllStandardOutput();
        ui->label->setText(out);
}

void Dialog::on_pushButton_3_clicked()
{
    system("cd /opt/mobhotspot/connection/ && ./refresh.ihs");
}

void Dialog::on_pushButton_2_clicked()
{
    system("cd /opt/mobhotspot/connection/ && ./stop.ihs");
}

void Dialog::on_pushButton_4_clicked()
{

    system("cd /opt/mobhotspot/setup/ && ./setupwizard.ihs");
   // system("");
}

void Dialog::on_pushButton_6_clicked()
{
    system("cd /opt/mobhotspot/settings/ && ./changewifi.ihs");
}

void Dialog::on_pushButton_7_clicked()
{
    system("cd /opt/mobhotspot/settings/ && ./changeroute.ihs");
}

void Dialog::on_pushButton_8_clicked()
{
    system("cd /opt/mobhotspot/settings/ && ./confirmremoveroot.ihs");
}


void Dialog::on_pushButton_9_clicked()
{
    system("cd /opt/mobhotspot/ && ./file.sh && ./net.sh");
}

void Dialog::on_pushButton_10_clicked()
{
    system("cd /opt/mobhotspot/about && gedit docs");
}

void Dialog::on_label_linkActivated(const QString &link)
{
}
