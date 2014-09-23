#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{/*
    menu = new QMenuBar(this);
    menu->setGeometry(0,0,780,23);
    file =menu->addMenu(tr("打开文件(&F)"));
    addMusic = file->addAction(tr("音乐(&M)"));
    addMusic->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_M));
*/
    ui->setupUi(this); createUi();
    this->setGeometry(QRect(0,0,400,400));
}

MyWidget::~MyWidget()
{
    delete ui;
}
void MyWidget::createUi()
{
    menu = new QMenuBar(this);
    menu->setGeometry(0,0,780,23);
    file =menu->addMenu(tr("打开文件(&F)"));
    addMusic = file->addAction(tr("音乐(&M)"));
    addMusic->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_M));

    other = menu->addMenu(tr("other(&o)"));
    addHelp = other->addAction(tr("帮助选项(&o)"));
    addHelp->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_O));

    textEdit = new QTextEdit(this);
    textEdit->setGeometry(0,23,400,400);
    
}
