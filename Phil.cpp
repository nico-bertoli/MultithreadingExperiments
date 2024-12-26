#include "Phil.h"
#include <QtLogging>

Phil::Phil(QWidget *parent):QWidget{parent}
{

}

void Phil::showEvent(QShowEvent *event)
{
    Init();

    forkPrev->hide();
    forkNext->hide();
}

void Phil::Init()
{
    if(isInit)
        return;

    int index = this->objectName().at(4).digitValue();

    qInfo() <<  QString::number(index);

    assert(index != -1);

    btnPhil = this->findChild<QPushButton*>("btnPhil"+QString::number(index));
    forkPrev = this->findChild<QWidget*>("forkPrev"+QString::number(index));
    forkNext = this->findChild<QWidget*>("forkNext"+QString::number(index));

    assert(btnPhil != nullptr);
    assert(forkPrev != nullptr);
    assert(forkNext != nullptr);

    isInit = true;
}
