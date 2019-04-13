/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TcpListen.h
 * Author: thiago
 *
 * Created on 13 de Abril de 2019, 15:39
 */

#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h> 

#ifndef TCPLISTEN_H
#define TCPLISTEN_H

#define ERR_SOCK_FAIL -1
#define ERR_SOCKOPT -2
#define ERR_BIND -3
#define ERR_LISTEN -4
#define ERR_ACCEPT -5

class TcpListen {
public:
    TcpListen();
    TcpListen(unsigned int queue, unsigned short int port);
    TcpListen(const TcpListen& orig);
    virtual ~TcpListen();
    
    void SetPort(unsigned short int port);
    void SetQueue(unsigned int queue);
    
    int listenOpen();
    int listenAccept();
    
private:
    unsigned int queue;
    unsigned short int port;
    int handle;
    struct sockaddr_in sock_in;

};

#endif /* TCPLISTEN_H */

