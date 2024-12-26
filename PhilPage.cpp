#include "PhilPage.h"
#include "QPushButton"

PhilPage::PhilPage(QWidget *parent): QWidget{parent}
{

}

void PhilPage::showEvent(QShowEvent *event)
{
    for(int i = 0; i < PHILS_COUNT; ++i){
        phils[i] = this->findChild<Phil*>("phil"+QString::number(i));
        assert(phils[i] != nullptr);
    }

    for(int i = 0; i < PHILS_COUNT; ++i){
        forks[i] = this->findChild<QWidget*>("fork"+QString::number(i));
        assert(forks[i] != nullptr);
    }

    qInfo("show event called");
}


