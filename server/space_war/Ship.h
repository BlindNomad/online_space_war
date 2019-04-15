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

#define COLONIZADOR 1
#define FRAGATA 2
#define CRUZADOR 3
#define TITAN 4
#define DESTROYER 5

class Ship{
    
public:
    Ship();
    Ship(const Ship& orig);
    virtual ~Ship();
    Ship(int type);
    
    int GetType();
    int GetAttack();
    int GetDefense();
    int GetBomb();
    int GetSpeed();

private:
    int type;
    int attack;
    int defense;
    int bomb;
    int speed;
    
};

#endif /* SHIP_H */

