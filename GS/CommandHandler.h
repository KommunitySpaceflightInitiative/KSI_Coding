/* 
 * File:   CommandHandler.h
 * Author: admin
 *
 * Created on March 13, 2015, 2:41 AM
 */

#ifndef COMMANDHANDLER_H
#define	COMMANDHANDLER_H

class CommandHandler {
public:
    CommandHandler();
    void sendCommand();
    void parseCommandFromTXT(char* c);
    void parseCommandFromByte(unsigned char* c);
private:

};

#endif	/* COMMANDHANDLER_H */

