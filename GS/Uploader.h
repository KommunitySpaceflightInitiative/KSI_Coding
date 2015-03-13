/* 
 * File:   Uploader.h
 * Author: admin
 *
 * Created on March 12, 2015, 9:59 PM
 */

#ifndef UPLOADER_H
#define	UPLOADER_H

class Uploader {
public:
    Uploader(char* ip,int port,char* nick,char* pass,char* chan,char* user ,char* name);
    void endConn();
    bool uploadJPG(char* c);
    bool uploadRaw(char* c);
    bool uploadToBeDetermined0(char* c);
    bool uploadToBeDetermined1(char* c);
    bool uploadToBeDetermined2(char* c);
    bool uploadToBeDetermined3(char* c);
    
    
    
private:
    

};

#endif	/* UPLOADER_H */

