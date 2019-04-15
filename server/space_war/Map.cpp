/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Map.cpp
 * Author: José C. Pereira <JPereira1330>
 * 
 * Created on 14 de Abril de 2019, 16:54
 */

#include <cstdio>
#include <iostream>

#include "Map.h"

Map::Map() {
}

Map::Map(const Map& orig) {
}

Map::~Map() {
}


void Map::MapGenerate(){
    
    int x, y;
    bool regenerate = false;
    Square square;
    this->listCoord.clear();
    
    // Quantia de planetas a serem gerados
    for(int i = 0; i <= PLANET_AMOUNT; i++){
        
        // Variavel utilizada para gerar uma nova coordenada.
        regenerate = false;
        
        // Gerando a coordenada de um novo planeta
        x = rand() % MAP_SIZE + 1;
        y = rand() % MAP_SIZE + 1;
        
        // Regras para a criação de planetas
        for(auto l : this->listCoord){
            
            // Verifica se a posição já foi utilizada
            if( x == l.getCoordX() && y == l.getCoordY() ){
                regenerate = true;
            }
            
            // Calculando distancia entre planetas
            int calc_x = x - l.getCoordX();
            int calc_y = y - l.getCoordY();
            
            // Verifica se existem algum planeta numa distancia igual ou menor do que 2
            if( (( calc_x <= 2 ) && ( calc_x >= -2)) && (( calc_y <= 2 ) && ( calc_y >= -2)) ){
                regenerate = true;
            }
            
        }
      
        // Caso tenha falhado em todas as regras, o planeta é gerado
        if(regenerate == false){

            // Gerando planeta e inserindo na estrutura
            Planet p;
            p.PlanetGenerate();
            square.setCoord(x,y);
            square.setPlanet(p);
            
            // Debug - Coordenada dos planetas
            printf(" [Debug] Planeta Gerado: [ X:%d / Y:%d ] \n", square.getCoordX(), square.getCoordY());
            
            // Inserindo na lista
            this->listCoord.push_back( square );
            
        }else{ // Caso tenha passado em alguma regra
            regenerate = false;
            i--;
        }
        
    }

}

list<Square> Map::GetAllSquare(){
    return this->listCoord;
}