/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   player.h
 * Author: thiago
 *
 * Created on 13 de Abril de 2019, 22:22
 */

#include <string>

#ifndef PLAYER_H
#define PLAYER_H

using namespace std;
class Players;

class Player {
public:
    Player(int handle);
    Player(const Player& orig);
    virtual ~Player();
    int start();
    
    void setPlayers(Players *players);
    static void initThread(Player *player);
    
    int getHandle() const;
    void setName(string name);



private:
    
    string name;
    int handle;
    Players *players;

};



#endif /* PLAYER_H */

