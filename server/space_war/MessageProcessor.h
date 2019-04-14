/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MessageProcessor.h
 * Author: thiago
 *
 * Created on 14 de Abril de 2019, 16:26
 */

#ifndef MESSAGEPROCESSOR_H
#define MESSAGEPROCESSOR_H

#include "Player.h"

using namespace std;

class MessageProcessor {
   
    
public:
    MessageProcessor();
    MessageProcessor(const MessageProcessor& orig);
    virtual ~MessageProcessor();
    
    static int requestName(int handle, Player *player);
private:
    

};

#endif /* MESSAGEPROCESSOR_H */

