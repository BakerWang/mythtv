#ifndef XBOX_H_
#define XBOX_H_

#include <QObject>
#include <QString>

#include "mythexp.h"

class QTimer;

class MPUBLIC XBox : public QObject
{
    Q_OBJECT
  public:
    XBox(void);

    void GetSettings(void);

  protected slots:
    void CheckRec(void);

  private:
    QTimer *timer;

    int RecCheck;

    QString RecordingLED;
    QString DefaultLED;
    QString PhaseCache;
    QString BlinkBIN;
    int     LEDNonLiveTV;
    int     TimeLen;
};

#endif
