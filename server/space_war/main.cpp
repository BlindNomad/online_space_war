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

#include "TcpListen.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int ret;
    
    printf("Iniciando o servidor\n");
    
    TcpListen listen(10, 55845);
    
    ret = listen.listenOpen();
    printf("Retorno do open listen: %d\n", ret);
    
    ret = listen.listenAccept();
    printf("Retorno do accept\n");
    
    send(ret, "Ola cliente\n", 12, 0);
    shutdown(ret, SHUT_RDWR);
    
    
    
    return 0;
}

