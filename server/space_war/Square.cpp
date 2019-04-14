/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Square.h"

Square::Square() {
    
}

Square::Square(Planet newPlanet) {
    SetPlanet(newPlanet);
}

Square::Square(Ship newShip){
    SetShip(newShip);
}

Square Square::SquareManager(Square square){
    
    if(square.planet != NULL && square.ship != NULL){
        square.planet.AddHangar(square.ship);
        square.ship = NULL;
    }
    
    return square;
}

void Square::SetPlanet(Planet newPlanet){
    this->planet = newPlanet;
    SquareManager(this);
}

void Square::SetShip(Ship newShip){
    this->planet = newShip;
    SquareManager(this);
}