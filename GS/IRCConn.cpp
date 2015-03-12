/* 
 * File:   IRCConn.cpp
 * Author: Jtsfour
 * 
 * Created on March 10, 2015, 9:22 PM
 */


#include <string>
#include<iostream>
#include"apis/cpIRC/IRC.h"
#include<pthread.h>
#include "IRCConn.h" 

using namespace std;



IRCConn::IRCConn(char* ip,int port,char* nick,char* pass,char* chan,char* user ,char* name):conn(),channel(chan) {
        char* e0 = "irc response";
        //conn.hook_irc_command(e0, &printReply);
        conn.start(ip, port,nick,user,name,pass);
        
        pthread_t msglpthrd;
	pthread_create(&msglpthrd ,NULL ,actMsgLoop ,NULL);
        
        conn.message_loop();
        conn.join(channel);  
}

int IRCConn::printReply(char* params, irc_reply_data* hostd, void* conn){

    //cout << irc_reply_data.nick << ":>|" << params << endl;

}

void IRCConn::sendData(char* data){
    conn.privmsg(data);
}

IRC IRCConn::getConn(){
    return conn;
}

void *IRCConn::actMsgLoop(){
    conn.message_loop();
    pthread_exit(NULL);
}

void IRCConn::endConn(){
    char c[16] = "Disconnecting";
 conn.quit(&c);   
}