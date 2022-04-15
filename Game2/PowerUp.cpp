#include "PowerUp.h"

 PowerUp::PowerUp(const string &img, string name, const double &dmg): Bullet(name,img,dmg)
{
    this->dmg = dmg;
}
