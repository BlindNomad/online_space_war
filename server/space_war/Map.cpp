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

#include "Map.h"
#include "Planet.h"

Map::Map() {
}

Map::Map(const Map& orig) {
}

Map::~Map() {
}

struct coordinate{
    int x;
    int y;
    Planet planet;
} *coord;

void Map::MapGenerate(){
    
    bool regenerate = false;
    coordinate newCoord;
    this->listCoord.clear();
    
    // Quantia de planetas a serem gerados
    for(int i = 0; i <= PLANET_AMOUNT; i++){
        
        // Variavel utilizada para gerar uma nova coordenada.
        regenerate = false;
        
        // Gerando a coordenada de um novo planeta
        newCoord.x = rand() % MAP_SIZE + 1;
        newCoord.y = rand() % MAP_SIZE + 1;

        // Regras para a criação de planetas
        for(auto l : this->listCoord){
            
            // Verifica se a posição já foi utilizada
            if( newCoord.x == l.x && newCoord.y == l.y ){
                printf(" [ 1 ] %d / %d - %d / %d \n", newCoord.x, newCoord.y, l.x, l.y);
                regenerate = true;
            }
            
            // Calculando distancia entre planetas
            int calc_x = newCoord.x - l.x;
            int calc_y = newCoord.y - l.y;
            
            // Verifica se existem algum planeta numa distancia igual ou menor do que 2
            if( (( calc_x <= 2 ) && ( calc_x >= -2)) && (( calc_y <= 2 ) && ( calc_y >= -2)) ){
                printf(" [ 2 ] %d / %d - %d / %d \n", newCoord.x, newCoord.y, l.x, l.y);
                regenerate = true;
            }
            
        }
      
        // Caso tenha falhado em todas as regras, o planeta é gerado
        if(regenerate == false){

            // Gerando planeta e inserindo na estrutura
            Planet p;
            p.PlanetGenerate();
            newCoord.planet = p;
 
            // Inserindo na lista
            this->listCoord.push_back( newCoord );
            
        }else{ // Caso tenha passado em alguma regra
            regenerate = false;
            i--;
        }
        
    }

}