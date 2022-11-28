#include "capot.h"

capot::capot(const MccUldaq &_laCarte, const int _numDio, const QObject *parent):
    QObject(parent),
    numDio(_numDio),
    laCarte(_laCarte)
{
    laCarte.ulDConfigBit(_numDio, DD_INPUT);
    laCarte.ulDBitIn(_numDio,etatCapot);
    connect(&timerCapot, &QTimer::timeout,this,&capot::onTimerCapot_timeout);
    timerCapot.start(TEMPO_CAPOT);
}

void capot::onTimerCapot_timeout()
{
    bool etatCourant;
    laCarte.ulDBitIn(numDio, etatCourant);
}
