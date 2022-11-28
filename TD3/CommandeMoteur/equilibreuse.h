#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H

#include "capot.h"
#include "mcculdaq.h"
#include "moteur.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Equilibreuse; }
QT_END_NAMESPACE

class Equilibreuse : public QMainWindow
{
    Q_OBJECT

public:
    explicit Equilibreuse(QWidget *parent = nullptr);
    ~Equilibreuse();

private:
    Ui::Equilibreuse *ui;
    MccUldaq laCarte;
    Moteur *leMoteur;
    capot *leCapot;
};
#endif // EQUILIBREUSE_H
