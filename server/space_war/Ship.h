/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ship.h
 * Author: José C. Pereira <JPereira1330>
 *
 * Created on 14 de Abril de 2019, 01:40
 */

#ifndef SHIP_H
#define SHIP_H

//#include "Player.h";

#define COLONIZADOR 1
#define FRAGATA 2
#define CRUZADOR 3
#define TITAN 4
#define DESTROYER 5

class Ship{
    
public:
    Ship();
    Ship(int type);
    
    void SetDamage(int damage);
    
    int GetType();
    int GetAttack();
    int GetDefense();
    int GetBomb();
    int GetSpeed();
    //Player GetPlayer;
    
    
private:
    int type;
    int attack;
    int defense;
    int bomb;
    int speed;
    // Player player;
};

#endif /* SHIP_H */

