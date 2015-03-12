/* 
 * File:   IRCConn.h
 * Author: admin
 *
 * Created on March 10, 2015, 9:21 PM
 */

/*#pragma once
#pragma comment(lib,"Ws2_32.lib")
#ifndef IRCCONN_H
#define	IRCCONN_H
#define SCK_VERSION2 0x0202
#include<sdkddkver.h>
#include<WinSock2.h>
#include<Windows.h>
 * */
#include<iostream>
#include<string>

class IRCConn {
public:
    IRCConn(char* url,int port,const char* nick,char* pass,char* chan);
    printReply(char* params, irc_reply_data* hostd, void* conn);
    sendData(char*);
    IRC getConn();
    endConn();
    
private:
actMsgLoop();
};

//#endif	/* IRCCONN_H */

