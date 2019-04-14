/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   players.h
 * Author: thiago
 *
 * Created on 13 de Abril de 2019, 22:29
 */

#include <list>

#include "Player.h"

#ifndef PLAYERS_H
#define PLAYERS_H

using namespace std;

class Players {
public:
    Players();
    Players(const Players& orig);
    virtual ~Players();
    
    void addPlayer(Player *player);
    
private:  
    list<Player *> players;
}; 

#endif /* PLAYERS_H */

