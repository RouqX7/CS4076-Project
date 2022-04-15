#ifndef COMMANDWORD_H_
#define COMMANDWORD_H_

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CommandWord {
private:
    //Define a static vector for our valid command words.
    //We'll populate this in the class constructor
    static vector<string> validCommands;

public:
    CommandWord();
    bool isCommand(string aString);
    void showAll();
};


#endif /*COMMANDWORD_H_*/
