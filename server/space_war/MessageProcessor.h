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

class MessageProcessor {
    enum {
        MESSAGE_NAME_REQUEST,
        MESSAGE_CONFIG_MAP_REQUEST
                
    };
    
public:
    MessageProcessor();
    MessageProcessor(const MessageProcessor& orig);
    virtual ~MessageProcessor();
private:
    

};

#endif /* MESSAGEPROCESSOR_H */

