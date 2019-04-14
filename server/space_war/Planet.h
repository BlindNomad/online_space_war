/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Planet.h
 * Author: José C. Pereira <JPereira1330>
 *
 * Created on 13 de Abril de 2019, 23:40
 */

#include <list>
#include <string>

using namespace std;

//#include "Player.h"
#include "Ship.h"
#include "Random.h"

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
    
    void AddHangar(Ship newShip);
    Ship RemHangar(int id);
    
    int GetType();
    int GetProduction();
    int GetFoodProduction();
    string getNameType();
    
    void SetType(int type);
    void SetProduction(int production);
    void SetFoodProduction(int food);
    
private:
    unsigned int type;
    unsigned int production;
    unsigned int foodProduction;
    list<Ship> hangar;
    //Player player;   Dono do planta

};

#endif /* PLANET_H */

