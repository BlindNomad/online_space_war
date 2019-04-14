/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newfile.h
 * Author: dev
 *
 * Created on 13 de Abril de 2019, 23:40
 */

#include <stdlib.h>
#include <ctime>
#include <string>

//#include "Player.h"

#ifndef PLANET_H
#define PLANET_H

#define GAIA_TYPE 1
#define TROPICAL_TYPE 2
#define CAVERNOUS_TYPE 3
#define TUNDRA_TYPE 4
#define DESERT_TYPE 5

class Planet{
    
public:
    Planet();
    Planet PlanetGenerate();
    
    int GetType();
    int GetProduction();
    int GetFoodProduction();
    //string getNameType();
    
    void SetType();
    void SetProduction();
    void SetFoodProduction();
    
private:
    unsigned int type;
    unsigned int production;
    unsigned int foodProduction;
    //Player player;
    // FALTANDO: ATRIBUTO HANGAR
    
    int RandomNumber(int max);   
};

#endif /* PLANET_H */

