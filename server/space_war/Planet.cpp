/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Planet.h"

Planet::Planet() {
}

Planet Planet::PlanetGenerate() {

    Planet p;
    int rand = RandomNumber(100);
    
    if( rand >= 1 && rand <= 4 )    { rand = GAIA_TYPE;     }
    if( rand >= 5 && rand <= 26 )   { rand = TROPICAL_TYPE; }
    if( rand >= 27 && rand <= 48 )  { rand = CAVERNOUS_TYPE; }
    if( rand >= 49 && rand <= 74 )  { rand = TUNDRA_TYPE; }
    if( rand >= 75 && rand <= 100 ) { rand = DESERT_TYPE; }

    switch (rand){
        
        case GAIA_TYPE:
            p.type = GAIA_TYPE;
            p.foodProduction = RandomNumber(1) + 4; // Min 4 - Max 5
            p.production = RandomNumber(1) + 4; // Min 4 - Max 5
            break;
        case TROPICAL_TYPE:
            p.type = TROPICAL_TYPE;
            p.foodProduction = RandomNumber(1) + 3; // Min 3 - Max 4
            p.production = RandomNumber(1) + 2; // Min 2 - Max 3
            break;
        case CAVERNOUS_TYPE:
            p.type = CAVERNOUS_TYPE;
            p.foodProduction = RandomNumber(1) + 2; // Min 2 - Max 3
            p.production = RandomNumber(1) + 3; // Min 3 - Max 4
            break;
        case TUNDRA_TYPE:
            p.type = TUNDRA_TYPE;
            p.foodProduction = RandomNumber(1) + 2; // Min 2 - Max 3
            p.production = RandomNumber(1) + 1; // Min 1 - Max 2
            break;
        case DESERT_TYPE:
            p.type = DESERT_TYPE;
            p.foodProduction = RandomNumber(1) + 1; // Min 1 - Max 2
            p.production = RandomNumber(1) + 2; // Min 2 - Max 3
            break;
        
    }
    
    return p;
}

int Planet::RandomNumber(int max){
    
    srand(time(0));
    
    return rand() % (max + 1); 
}

int Planet::GetType(){
    return type;
}

/*string Planet::getNameType(){
    
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
*/

int Planet::GetProduction(){
    return production;
}

int Planet::GetFoodProduction(){
    return foodProduction;
}
