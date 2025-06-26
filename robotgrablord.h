#ifndef ROBOTGRABLORD_H
#define ROBOTGRABLORD_H

#include <QThread>
#include "player.h"
class RobotGrabLord : public QThread
{
    Q_OBJECT
public:
    explicit RobotGrabLord(Player *player, QObject *parent = 0);
protected:
   void run();
private:
   Player *m_player;

signals:

public slots:
};

#endif // ROBOTGRABLORD_H
