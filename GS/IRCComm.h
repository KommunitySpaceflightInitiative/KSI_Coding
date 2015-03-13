/* 
 * File:   IRCComm.h
 * Author: admin
 *
 * Created on March 13, 2015, 3:55 PM
 */

#ifndef IRCCOMM_H
#define	IRCCOMM_H

class IRCComm {
public:
    IRCComm();
    IRCComm(char* ip,int port,char* nick,char* pass,char* chan,char* user ,char* name);
    void endConn();
    void sendData(char* c);
private:

};

#endif	/* IRCCOMM_H */

