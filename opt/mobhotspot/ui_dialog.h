/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Fri May 2 23:06:23 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabwidget1;
    QWidget *tabWidgetPage1;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *tabWidgetPage2;
    QLabel *label_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_4;
    QWidget *tabWidgetPage3;
    QLabel *label_3;
    QTextEdit *textEdit;
    QPushButton *pushButton_10;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setWindowModality(Qt::ApplicationModal);
        Dialog->resize(390, 313);
        Dialog->setMaximumSize(QSize(440, 380));
        Dialog->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../opt/mobhotspot/images/antenna-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        Dialog->setAutoFillBackground(true);
        Dialog->setSizeGripEnabled(true);
        Dialog->setModal(true);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabwidget1 = new QTabWidget(Dialog);
        tabwidget1->setObjectName(QString::fromUtf8("tabwidget1"));
        tabwidget1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabwidget1->sizePolicy().hasHeightForWidth());
        tabwidget1->setSizePolicy(sizePolicy);
        tabwidget1->setMaximumSize(QSize(480, 400));
        tabwidget1->setSizeIncrement(QSize(335, 200));
        tabwidget1->setBaseSize(QSize(300, 300));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        tabwidget1->setFont(font);
        tabwidget1->setInputMethodHints(Qt::ImhDialableCharactersOnly|Qt::ImhDigitsOnly|Qt::ImhEmailCharactersOnly|Qt::ImhFormattedNumbersOnly|Qt::ImhLowercaseOnly|Qt::ImhUppercaseOnly|Qt::ImhUrlCharactersOnly);
        tabwidget1->setTabPosition(QTabWidget::North);
        tabwidget1->setTabShape(QTabWidget::Rounded);
        tabwidget1->setIconSize(QSize(35, 35));
        tabwidget1->setElideMode(Qt::ElideNone);
        tabwidget1->setUsesScrollButtons(true);
        tabwidget1->setDocumentMode(false);
        tabwidget1->setTabsClosable(false);
        tabwidget1->setMovable(false);
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QString::fromUtf8("tabWidgetPage1"));
        label = new QLabel(tabWidgetPage1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 191, 17));
        label->setMaximumSize(QSize(480, 500));
        label->setInputMethodHints(Qt::ImhPreferUppercase);
        label->setFrameShadow(QFrame::Plain);
        pushButton = new QPushButton(tabWidgetPage1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 151, 101));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(480, 500));
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setInputMethodHints(Qt::ImhNone);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../../../opt/mobhotspot/images/unnamed.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(30, 30));
        pushButton->setCheckable(false);
        pushButton->setAutoRepeat(false);
        pushButton->setAutoDefault(true);
        pushButton->setDefault(false);
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(tabWidgetPage1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 150, 151, 91));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMaximumSize(QSize(480, 500));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../../../opt/mobhotspot/images/Hand-Stop-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(30, 30));
        pushButton_3 = new QPushButton(tabWidgetPage1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(170, 40, 101, 201));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMaximumSize(QSize(480, 500));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_4 = new QPushButton(tabWidgetPage1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(277, 40, 81, 131));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMaximumSize(QSize(480, 500));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../../../../opt/mobhotspot/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(30, 30));
        pushButton_5 = new QPushButton(tabWidgetPage1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(279, 180, 81, 61));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMaximumSize(QSize(480, 500));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../../../../../opt/mobhotspot/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon5);
        pushButton_5->setIconSize(QSize(30, 30));
        tabwidget1->addTab(tabWidgetPage1, icon, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QString::fromUtf8("tabWidgetPage2"));
        label_2 = new QLabel(tabWidgetPage2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 361, 20));
        pushButton_6 = new QPushButton(tabWidgetPage2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 40, 341, 41));
        pushButton_7 = new QPushButton(tabWidgetPage2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 80, 341, 50));
        pushButton_8 = new QPushButton(tabWidgetPage2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 130, 341, 41));
        pushButton_9 = new QPushButton(tabWidgetPage2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 200, 341, 41));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../../../../../opt/mobhotspot/images/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon6);
        pushButton_9->setIconSize(QSize(30, 30));
        label_4 = new QLabel(tabWidgetPage2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 180, 101, 17));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../../../../../opt/mobhotspot/images/setting1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabwidget1->addTab(tabWidgetPage2, icon7, QString());
        tabWidgetPage3 = new QWidget();
        tabWidgetPage3->setObjectName(QString::fromUtf8("tabWidgetPage3"));
        label_3 = new QLabel(tabWidgetPage3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 311, 21));
        textEdit = new QTextEdit(tabWidgetPage3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 50, 361, 131));
        pushButton_10 = new QPushButton(tabWidgetPage3);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(20, 200, 341, 27));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../../../../../opt/mobhotspot/images/info_black.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabwidget1->addTab(tabWidgetPage3, icon8, QString());

        gridLayout->addWidget(tabwidget1, 0, 0, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(pushButton_5, SIGNAL(clicked()), Dialog, SLOT(close()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), label, SLOT(clear()));
        QObject::connect(pushButton, SIGNAL(clicked()), label, SLOT(show()));

        tabwidget1->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "MOBHOTSPOT", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        tabwidget1->setWhatsThis(QApplication::translate("Dialog", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("Dialog", "Name of connection : ", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "Create", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QString());
        pushButton_2->setText(QApplication::translate("Dialog", "Stop", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Dialog", "refresh", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Dialog", "Setup", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Dialog", "Close", 0, QApplication::UnicodeUTF8));
        tabwidget1->setTabText(tabwidget1->indexOf(tabWidgetPage1), QString());
        label_2->setText(QApplication::translate("Dialog", "Advanced Tab", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Dialog", "Edit WIFI Settings", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Dialog", "Edit Internet Source", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("Dialog", "Remove Root Rights", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("Dialog", "Users and Security", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "Security", 0, QApplication::UnicodeUTF8));
        tabwidget1->setTabText(tabwidget1->indexOf(tabWidgetPage2), QString());
        label_3->setText(QApplication::translate("Dialog", "About", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">  Mobhotspot Infrastructure Wireless Connection</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">  Version 1.0.0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0"
                        "px;\"><span style=\" font-weight:400;\">  Developed by Tejesh Agrawal 2014 (c)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">  an Open Source Fidelity Project</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">		</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("Dialog", "How to use", 0, QApplication::UnicodeUTF8));
        tabwidget1->setTabText(tabwidget1->indexOf(tabWidgetPage3), QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
