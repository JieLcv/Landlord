#ifndef ROBOTPLAYHAND_H
#define ROBOTPLAYHAND_H

#include <QThread>
#include "player.h"
class RobotPlayHand : public QThread
{
    Q_OBJECT
public:
    explicit RobotPlayHand(Player *player, QObject *parent = 0);
protected:
    void run() override;
private:
    Player *m_player;
signals:

public slots:
};

#endif // ROBOTPLAYHAND_H
