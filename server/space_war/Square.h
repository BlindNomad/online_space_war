/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.h
 * Author: José C. Pereira <JPereira1330>
 *
 * Created on 15 de Abril de 2019, 13:57
 */

#ifndef SQUARE_H
#define SQUARE_H

#include "Planet.h"

class Square {
public:
    Square();
    Square(const Square& orig);
    virtual ~Square();
    
    void setCoord(int x, int z);
    void setPlanet(Planet planet);
    
    int getCoordX();
    int getCoordY();
    Planet getPlanet();
    
private:
    int x;
    int y;
    Planet planet;
    
};

#endif /* SQUARE_H */

