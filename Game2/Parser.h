#ifndef PARSER_H_
#define PARSER_H_

#include "Command.h"
#include "CommandWord.h"

class Parser {
private:
    CommandWord *commands;

public:
    Parser();
    Command* getCommand();
    void showCommands();
};

#endif /*PARSER_H_*/

