#include "Game.h"

Game::Game() {
    choice = 0;
    playing = true;
}

Game::~Game() {

}

void Game::mainMenu() {
    cout<<"Main Menu"<<endl<<endl;
    cout<<"1: Start"<<endl;
    cout<<"0: Quit"<<endl;

    cout<<endl<<"Choice: ";
    cin>>choice;
    switch (choice) {
        case 0: playing = false;
            break;
        case 1: {
            createCharacter();
            playMenu();
            break;
        }
        default: break;

    }
}

void Game::playMenu() {

    while (choice!=0) {
        cout << "Play Menu" << endl << endl;
        cout << "1: Explore" << endl;
        cout << "2: Show stats" << endl;
        cout << "0: Go back" << endl;

        cout << endl << "Choice: ";
        cin >> choice;
        switch (choice) {
            case 0:

                break;
            case 1: {
                character.gainExp(200);
                break;
            }
            case 2:
                cout<<character.getInfo()<<endl;
                break;
            default:
                break;
        }
    }
}

void Game::showStats(){


}


void Game::createCharacter(){
    cout<<"Enter the name: ";
    string name;
    cin>> name;
    character.setName(name);
    //character(name);

};

bool Game::isPlaying() const{
    return playing;

}

void Game::setPlaying(bool playing) {
    Game::playing = playing;
}
