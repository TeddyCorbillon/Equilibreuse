#ifndef CAPOT_H
#define CAPOT_H


#include "mcculdaq.h"
#include <QObject>
#include <QTimer>
#define TEMPO_CAPOT 500

class MccUldaq;
class capot : public QObject
{
    Q_OBJECT
public:
    capot(const MccUldaq &_laCarte,const int _numDio, const QObject *parent=nullptr);
    void onTimerCapot_timeout();
private:
    int numDio;
    QTimer timerCapot;
    bool etatCapot;
    MccUldaq &laCarte;
signals:
    void EtatCapotChange(bool _etat);
};

#endif // CAPOT_H
