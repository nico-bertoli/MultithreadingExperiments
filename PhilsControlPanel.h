#ifndef PHILSCONTROLPANEL_H
#define PHILSCONTROLPANEL_H

#include <QFrame>
#include <QSpinBox>
#include <QPushButton>
#include <QComboBox>
#include "PhilPage.h"

using Algorithm = PhilPage::Algorithm;

class PhilsControlPanel : public QFrame
{
    Q_OBJECT
//------------------------------- Fields
private:
    bool isInit = false;

    QSpinBox* spinBoxSleepMinDur;
    QSpinBox* spinBoxSleepMaxDur;
    QSpinBox* spinBoxEatMinDur;
    QSpinBox* spinBoxEatMaxDur;

    QPushButton* btnStartSimulation;
    QPushButton* btnStopSimulation;
    QPushButton* btnForceDeadlock;

    QComboBox* comboBoxAlgorithm;

    PhilPage* philPage;

//------------------------------- Methods
public:
    explicit PhilsControlPanel(QWidget *parent = nullptr);

protected:
    void showEvent(QShowEvent *event) override;

private:
    void Init();
    void ForceSpinBoxesValid(QSpinBox* spinBoxValChanged, QSpinBox* spinBoxForceValid, bool mustChangedValBeGreater);

private slots:
    void SlotOnStartButtonPressed();
    void SlotOnStopButtonPressed();
    void SlotOnForceDeadlockButtonPressed();

    void SlotOnSleepMinDurChanged();
    void SlotOnSleepMaxDurChanged();
    void SlotOnEatMinDurChanged();
    void SlotOnEatMaxDurChanged();

    void SlotOnComboBoxAlgorithmChanged();
};

#endif // PHILSCONTROLPANEL_H
