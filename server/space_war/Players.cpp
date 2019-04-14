/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   players.cpp
 * Author: thiago
 * 
 * Created on 13 de Abril de 2019, 22:29
 */

#include "Players.h"

Players::Players() {
}

Players::Players(const Players& orig) {
}

Players::~Players() {
}

void Players::setMtx(mutex* mtx) {
    this->mtx = mtx;
}


void Players::addPlayer(Player *player) {
    this->players.push_back(player);
}


