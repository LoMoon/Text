#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QMenuBar>
#include <QTextEdit>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

private:
    Ui::MyWidget *ui;
    QMenuBar *menu;
    QMenu *file;
    QMenu *other;
    QAction *addMusic;
    QAction *addHelp;
    void createUi();
    QTextEdit *textEdit;
};

#endif // MYWIDGET_H
