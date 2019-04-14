/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Map.h"

Map::Map() {

}

Map Map::MapGenerate(){
    return MapGenerate(MEDIUM);
}

Map Map::MapGenerate(int size) {

    /**
     *  Formula para o tamanho do mapa
     *  SIZE = min_size * size
     */
    size = MIN_SIZE * size;
    
    /**
     * Formula para a quantia de planetas
     * Amount = size / 4 + 2
     */
    int amount = size / 4 + 2;
    
    Map map[][];
    
    do{
        
        /*
         * Desenvolvnedo formula ainda
         */
        amount--;
        
    }while(amount >= 1);
    
    return map;
}
