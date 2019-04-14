/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   player.cpp
 * Author: thiago
 * 
 * Created on 13 de Abril de 2019, 22:22
 */

#include "Player.h"

#include <thread>
#include <sys/socket.h>

#include "Players.h"

Player::Player(int handle) {
    this->handle = handle;
    
}

Player::Player(const Player& orig) {
}

Player::~Player() {
    //TODO retirar da lista
}

void Player::setPlayers(Players *players) {
    this->players = players;
}

int Player::getHandle() const {
    return handle;
}

void Player::setName(string name) {
    this->name = name;
}


void Player::initThread(Player *player) {
    int bytes;
    char msg[64];
    
    do {
        bytes = recv(player->handle, msg, sizeof(msg), 0);
        printf("%s\n", msg);
    }while (player->handle > 0 && bytes > 0);
    
}


int Player::start() {
    thread play(initThread, this);
    play.detach();
}
