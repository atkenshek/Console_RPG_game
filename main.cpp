#include "Game.h"

int main() {

    Game game; //Game initialized
    while (game.isPlaying()) {
        game.mainMenu();
    }

    return 0;
}
