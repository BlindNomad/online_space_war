/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Planet.cpp
 * Author: José C. Pereira <JPereira1330>
 *
 * Created on 13 de Abril de 2019, 23:40
 */

#include "Planet.h"

Planet::Planet() {
}

Planet::Planet(const Planet& orig){
}

Planet::~Planet(){
}

Planet Planet::PlanetGenerate() {

    Planet p;
    int nrand = rand() % (100 + 1);
    
    if( nrand >= 1 && nrand <= 4 ){ 
        nrand = GAIA_TYPE; 
    }
    
    if( nrand >= 5 && nrand <= 26 ){ 
        nrand = TROPICAL_TYPE; 
    }
    
    if( nrand >= 27 && nrand <= 48 ){ 
        nrand = CAVERNOUS_TYPE;
    }
    
    if( nrand >= 49 && nrand <= 74 )  { 
        nrand = TUNDRA_TYPE;
    }
    
    if( nrand >= 75 && nrand <= 100 ) {
        nrand = DESERT_TYPE;
    }

    switch (nrand){
        
        case GAIA_TYPE:
            p.type = GAIA_TYPE;
            p.foodProduction = rand() % (1 + 1) + 4; // Min 4 - Max 5
            p.production = rand() % (1 + 1) + 4; // Min 4 - Max 5
            break;
        case TROPICAL_TYPE:
            p.type = TROPICAL_TYPE;
            p.foodProduction = rand() % (1 + 1) + 3; // Min 3 - Max 4
            p.production = rand() % (1 + 1) + 2; // Min 2 - Max 3
            break;
        case CAVERNOUS_TYPE:
            p.type = CAVERNOUS_TYPE;
            p.foodProduction = rand() % (1 + 1) + 2; // Min 2 - Max 3
            p.production = rand() % (1 + 1) + 3; // Min 3 - Max 4
            break;
        case TUNDRA_TYPE:
            p.type = TUNDRA_TYPE;
            p.foodProduction = rand() % (1 + 1) + 2; // Min 2 - Max 3
            p.production = rand() % (1 + 1) + 1; // Min 1 - Max 2
            break;
        case DESERT_TYPE:
            p.type = DESERT_TYPE;
            p.foodProduction = rand() % (1 + 1) + 1; // Min 1 - Max 2
            p.production = rand() % (1 + 1) + 2; // Min 2 - Max 3
            break;

    }
    
    return p;
}

int Planet::GetType(){
    return type;
}

string Planet::getNameType(){
    
    string retorno;
    
    switch(this->type){
        case GAIA_TYPE:
            retorno = "Gaia";
            break;
        case TROPICAL_TYPE:
            retorno = "Tropical";
            break;
        case CAVERNOUS_TYPE:
            retorno = "Cavernoso";
            break;
        case TUNDRA_TYPE:
            retorno = "Tundra";
            break;
        case DESERT_TYPE:
            retorno = "Deserto";
            break;
    }
    
    return retorno;
}

int Planet::GetProduction(){
    return production;
}

int Planet::GetFoodProduction(){
    return foodProduction;
}

void Planet::SetType(int type){
    this->type = type;
}

void Planet::SetFoodProduction(int food) {
    this->foodProduction = food;
}

void Planet::SetProduction(int production){
    this->production = production;
}
