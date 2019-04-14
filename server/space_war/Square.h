/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.h
 * Author: José C. Pereira <JPereira1330>
 *
 * Created on 14 de Abril de 2019, 11:01
 */

#ifndef SQUARE_H
#define SQUARE_H

#include "Planet.h"
#include "Ship.h"

class Square{
    
public:
    Square();
    Square(Planet newPlanet);
    Square(Ship newShip);
    
    void SetPlanet(Planet newPlanet);
    void SetShip(Ship newShip);
    
    Planet GetPlanet();
    Ship GetShip();
    
private:
    Planet planet;
    Ship ship;
    
    // Caso exista um planeta no Square, o Ship é jogado para o hangar do planeta.
    Square SquareManager(Square square);
};

#endif /* SQUARE_H */

