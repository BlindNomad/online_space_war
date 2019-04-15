/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ship.cpp
 * Author: José C. Pereira <JPereira1330>
 *
 * Created on 14 de Abril de 2019, 01:40
 */

#include "Ship.h"

Ship::Ship(){
    
}

Ship::Ship(const Ship& orig){ 
}

Ship::~Ship(){    
}


Ship::Ship(int type) {

    switch(type){
        
        case COLONIZADOR:
            this->attack = 0;
            this->bomb = 0;
            this->defense = 3;
            this->speed = 2;
            this->type = COLONIZADOR;
            break;
            
        case FRAGATA:
            this->attack = 4;
            this->bomb = 1;
            this->defense = 2;
            this->speed = 3;
            this->type = FRAGATA;
            break;
            
        case CRUZADOR:
            this->attack = 0;
            this->bomb = 0;
            this->defense = 0;
            this->speed = 0;
            this->type = CRUZADOR;
            break;
            
        case TITAN:
            this->attack = 0;
            this->bomb = 0;
            this->defense = 0;
            this->speed = 0;
            this->type = TITAN;
            break;
            
        case DESTROYER:
            this->attack = 0;
            this->bomb = 0;
            this->defense = 0;
            this->speed = 0;
            this->type = DESTROYER;
            break;
                       
    }
    
}


int Ship::GetType(){
    return type;
}

int Ship::GetAttack(){
    return attack;
}

int Ship::GetDefense(){
    return defense;
}

int Ship::GetBomb(){
    return bomb;
}

int Ship::GetSpeed(){
    return speed;
}