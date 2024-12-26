#ifndef PHILPAGE_H
#define PHILPAGE_H

#include <QObject>
#include <QWidget>
#include "PhilView.h"

class PhilPage : public QWidget
{
    Q_OBJECT

//---------------------------------------- Fields
private:
    static const size_t PHILS_COUNT = 4;
    QWidget* forks [PHILS_COUNT];
    PhilView* phils [PHILS_COUNT];

//---------------------------------------- Methods
public:
    explicit PhilPage(QWidget *parent = nullptr);

protected:
    void showEvent(QShowEvent *event) override;

private:
    void Init();

signals:

private slots:
    void SlotOnStartButtonPressed();
};

#endif // PHILPAGE_H
