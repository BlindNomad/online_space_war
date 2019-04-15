/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Map.h
 * Author: José C. Pereira <JPereira1330>
 *
 * Created on 14 de Abril de 2019, 16:54
 */

#ifndef MAP_H
#define MAP_H

#include <list>
#include <cstdlib>

#include "Planet.h"
#include "Square.h"

#define MAP_SIZE 24
#define PLANET_AMOUNT 12

using namespace std;

class Map {
    
public:
    Map();
    Map(const Map& orig);
    virtual ~Map();
    
    void MapGenerate();
    list<Square> GetAllSquare();
        
private:
    list<Square> listCoord; 
 
};

#endif /* MAP_H */

