/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: thiago
 *
 * Created on 13 de Abril de 2019, 15:22
 */

#include <cstdlib>
#include <cstdio>
#include <condition_variable>
#include <time.h>

#include "TcpListen.h"
#include "Player.h"
#include "Players.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int ret;
    mutex mtx;
    Players players;
    
    srand(time(0));

    printf("Iniciando o servidor\n");

    TcpListen listen(10, 55845);

    ret = listen.listenOpen();
    printf("Retorno do open listen: %d\n", ret);

    do {
        mtx.lock();
        ret = listen.listenAccept();
        printf("Retorno do accept %d\n", ret);
        Player *player = new Player(ret);
        player->setPlayers(&players);
        player->start();
        players.addPlayer(player);
        mtx.unlock();
    } while (ret > 0);



    return 0;
}

