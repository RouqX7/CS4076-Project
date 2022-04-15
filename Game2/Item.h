#ifndef ITEM_H_
#define ITEM_H_

#include <map>
#include <string>
#include <iostream>
using namespace std;

class Item {
protected:
    string description;
    string longDescription;
    int weightGrams;

    float value;
    bool weaponCheck;

public:
    string img;
    Item (string description, int inWeight, float inValue);
    Item (string description, string img);
    string getShortDescription();
    string getLongDescription();
    int getWeight();
    void setWeight(int weightGrams);
    float getValue();
    void setValue(float value);
    int getWeaponCheck();
    void setWeaponCheck(int weaponCheck);
};

#endif /*ITEM_H_*/
