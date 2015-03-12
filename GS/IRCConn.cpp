/* 
 * File:   IRCConn.cpp
 * Author: Jtsfour
 * 
 * Created on March 10, 2015, 9:22 PM
 */

#include "IRCConn.h" 
#include <string>
#include<iostream>
#include<apis/cpIRC/IRC.h>
#include<pthread.h>

using namespace std;

IRC conn;
char* channel;

IRCConn::IRCConn(char* ip,int port,char* nick,char* pass,char* chan,char* user ,char* name) {
        channel=chan;
        conn.hook_irc_command("irc response", &printReply);
        conn.start(ip, port, nick,user,name,pass);
        
        pthread_t msglpthrd;
	pthread_create (msglpthrd ,NULL ,actMsgLoop ,NULL);
        
        conn.message_loop();
        conn.join(chan);   
}

/*struct irc_reply_data
	{
		char* nick;
		char* ident;
		char* host;
		char* target; /* This variable contains things such as the target of a PRIVMSG/NOTICE message, 
				 ie. the channel or person it was sent to 
	*/

printReply(char* params, irc_reply_data* hostd, void* conn){

    cout<<irc_reply_data.nick<<":>|"<<params<<endl;

}

sendData(char* data){
    conn.privmsg(data);
}

getConn(){
    return conn;
}

actMsgLoop(){
    conn.message_loop();
    pthread_exit();
}

endConn(){
 conn.quit("Disconnecting");   
}