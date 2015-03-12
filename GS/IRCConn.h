/* 
 * File:   IRCConn.h
 * Author: admin
 *
 * Created on March 12, 2015, 4:06 PM
 */

#ifndef IRCCONN_H
#define	IRCCONN_H

//#include"apis/cpIRC/IRC.h"

class IRCConn {
public:
    IRCConn(char* ip,int port,char* nick,char* pass,char* chan,char* user ,char* name);
    int printReply(char* params, irc_reply_data* hostd, void* conn);
    void sendData(char*);
    IRC getConn();
    void endConn();
    
private:
void* actMsgLoop();
IRC conn;
char* channel;
};

#endif	/* IRCCONN_H */

