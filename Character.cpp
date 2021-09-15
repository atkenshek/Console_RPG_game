#include "Character.h"

Character::Character() {
    name = "Player";
    maxHP = 10;
    HP = maxHP;
    atk = 2;
    level = 0;
    exp = 0;

}

Character::~Character() {}

string Character::getInfo(){
    string string1;
    string1 = "Name: "+name+ +"\n"+"HP: "+ to_string(HP)+"/"+ to_string(maxHP)+"\n"
            +"atk: "+ to_string(atk)+"\n"+ "exp: " + to_string(exp)+"\n"+ "level: "+to_string(level);


    return string1;
}

//exp
//level
void Character::gainExp(int exp) {
    this->exp = this->exp + exp;
    if (exp>=level*100){
        level++;
        exp=0;
    }

    //TODO increase stats
}





const string &Character::getName() const {
    return name;
}

void Character::setName(const string &name) {
    Character::name = name;
}

int Character::getMaxHp() const {
    return maxHP;
}

void Character::setMaxHp(int maxHp) {
    maxHP = maxHp;
}

int Character::getHp() const {
    return HP;
}

void Character::setHp(int hp) {
    HP = hp;
}

int Character::getAtk() const {
    return atk;
}

void Character::setAtk(int atk) {
    Character::atk = atk;
}

int Character::getLevel() const {
    return level;
}

void Character::setLevel(int level) {
    Character::level = level;
}

int Character::getExp() const {
    return exp;
}

void Character::setExp(int exp) {
    Character::exp = exp;
}


