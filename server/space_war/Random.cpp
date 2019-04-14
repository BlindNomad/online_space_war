/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Random.h"

int Random::RandomNumber(int max){
    
    srand(time(0));
    
    return rand() % (max + 1); 
}