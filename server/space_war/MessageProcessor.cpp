/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MessageProcessor.cpp
 * Author: thiago
 * 
 * Created on 14 de Abril de 2019, 16:26
 */

#include <sys/socket.h>
#include <string>
#include "MessageProcessor.h"

typedef struct messageHeader{
    int len;
    char type;
    char subType;
}MESSAGE_HEADER;

MessageProcessor::MessageProcessor() {
}

MessageProcessor::MessageProcessor(const MessageProcessor& orig) {
}

MessageProcessor::~MessageProcessor() {
}

int MessageProcessor::requestName(int handle, Player* player) {
    MESSAGE_HEADER m;
    char *name;
    int bytes, len, totalBytes;
    
    m.len = 2;
    m.type = 'r';
    m.subType = 'n';
    
    bytes = send(player->getHandle(), &m, sizeof(MESSAGE_HEADER));
    if (bytes < sizeof(MESSAGE_HEADER)){
        return -1;
    }
    bytes = recv(player->getHandle(), &len, sizeof(int), 0);
    if (bytes < sizeof(int)){
        return -2;
    }
    name = (char *) malloc(len + 1);
    totalBytes = 0;
    do {
        bytes = recv(player->getHandle(), &name[totalBytes], len - totalBytes, 0);
        totalBytes += bytes;
    }while(bytes > 0 && totalBytes < len);
    name[totalBytes] = 0;
    player->setName(string(name));
    free(name);
}

