#include "equilibreuse.h"
#include "ui_equilibreuse.h"

Equilibreuse::Equilibreuse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Equilibreuse)
{
    ui->setupUi(this);
    leCapot = new capot(laCarte,0,this);
    leMoteur = new Moteur(laCarte,0,this);;
}

Equilibreuse::~Equilibreuse()
{
    delete ui;
    delete [] leCapot;
}

