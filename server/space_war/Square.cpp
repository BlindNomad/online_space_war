/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.cpp
 * Author: José C. Pereira <JPereira1330>
 * 
 * Created on 15 de Abril de 2019, 13:57
 */

#include "Square.h"

Square::Square() {
}

Square::Square(const Square& orig) {
}

Square::~Square() {
}

void Square::setPlanet(Planet planet){
    this->planet = planet;
}

void Square::setCoord(int x, int y){
    this->x = x;
    this->y = y;
}

int Square::getCoordX(){
    return this->x;
}

int Square::getCoordY(){
    return this->y;
}

Planet Square::getPlanet(){
    return this->planet;
}
