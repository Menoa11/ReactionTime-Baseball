#include <iostream>
#include "components.h"
using namespace std;

void player::addScore(int points){
    score += points;
}

void player::reduceScore(int reduction){
    score -= reduction;
}

int player::getScore(){
    return score;
}

void player::setName(string newName){
    name = newName;
}