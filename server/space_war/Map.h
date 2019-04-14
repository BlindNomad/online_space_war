/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Map.h
 * Author: José C. Pereira <JPereira1330>
 *
 * Created on 14 de Abril de 2019, 12:00
 */

#ifndef MAP_H
#define MAP_H

#include "Square.h"
#include "Random.h"

#define MIN_SIZE 12

#define DUEL 1
#define MEDIUM 2
#define LARGE 3
#define GIANT 4

class Map{

public:
    Map();
    Map MapGenerate();
    Map MapGenerate(int size);
    
private:
    Square map[];
    
}

#endif /* MAP_H */

