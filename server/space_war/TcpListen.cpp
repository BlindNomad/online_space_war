/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TcpListen.cpp
 * Author: thiago
 * 
 * Created on 13 de Abril de 2019, 15:39
 */

#include "TcpListen.h"

TcpListen::TcpListen() {
}

TcpListen::TcpListen(unsigned int queue, unsigned short int port) {
    this->queue = queue;
    this->port = port;
}

TcpListen::TcpListen(const TcpListen& orig) {
}

TcpListen::~TcpListen() {
}

void TcpListen::SetPort(unsigned short int port) {
    this->port = port;
}

void TcpListen::SetQueue(unsigned int queue) {
    this->queue = queue;
}

int TcpListen::open() {
    int opt = 1;
    
    if ((this->handle = socket(AF_INET, SOCK_STREAM, 0)) == 0) { 
        //Socket Fail
        return ERR_SOCK_FAIL; 
    } 
       
    // Forcefully attaching socket to the port 8080 
    if (setsockopt(this->handle, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) {
        //Error setsockopt 
        return ERR_SOCKOPT; 
    } 
    this->sock_in.sin_family = AF_INET;
    this->sock_in.sin_addr.s_addr = INADDR_ANY;
    this->sock_in.sin_port = htons(this->port);
       
    // Forcefully attaching socket to the port 8080 
    if (bind(this->handle, (struct sockaddr *)&this->sock_in,sizeof(this->sock_in))<0){ 
        return ERR_BIND;
    } 
    if (listen(this->handle, this->queue) < 0) 
    { 
        perror("listen"); 
        exit(EXIT_FAILURE); 
    } 
    
}

int TcpListen::accept() {

}



