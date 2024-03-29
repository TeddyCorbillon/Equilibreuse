#ifndef WIDGETUSB202_H
#define WIDGETUSB202_H

#include "mcculdaq.h"
#include <QTimer>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class WidgetUSB202; }
QT_END_NAMESPACE

class WidgetUSB202 : public QWidget
{
    Q_OBJECT
    enum LED{
        LED1 =4,
        LED2 =5,
        LED3 =6,
        LED4 =7
    };

    enum BP{
        BP1 =0,
        BP2,
        BP3,
        BP4
    };

public:
    WidgetUSB202(QWidget *parent = nullptr);
    ~WidgetUSB202();
private slots:
        void on_checkBox_LED1_stateChanged(int arg1);

        void on_checkBox_LED2_stateChanged(int arg1);

        void on_checkBox_LED3_stateChanged(int arg1);

        void on_checkBox_LED4_stateChanged(int arg1);

        void on_TimerBP_timeOut();

private:
    Ui::WidgetUSB202 *ui;

    MccUldaq laCarte;
      QTimer timerBP;
};
#endif // WIDGETUSB202_H
