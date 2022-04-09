#ifndef POWERUP_H
#define POWERUP_H
#include "Bullet.h"
#include "item.h"


class PowerUp : public Bullet
{
private: double dmg;

public:
    PowerUp(const string& img, string name, const double& dmg);
};

#endif // POWERUP_H
