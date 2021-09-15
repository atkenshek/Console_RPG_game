#include <iostream>
#include <string>
#include "Character.h"
using namespace std;

#ifndef IT2001_2002_L1_GAME_H
#define IT2001_2002_L1_GAME_H

class Game {
public:
    Game();
    virtual ~Game();

    void mainMenu();
    bool isPlaying() const;
    void setPlaying(bool playing);
    void createCharacter();

private:
    int choice;
    bool playing;
    Character character;

    void playMenu();
    void showStats();
};


#endif //IT2001_2002_L1_GAME_H
