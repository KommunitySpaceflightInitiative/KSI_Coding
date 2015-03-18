/*
 * File:   DataController.cpp
 * Author: Jtsfour
 *
 * Created on March 12, 2015, 10:13 AM
 *
 * This class will be sort of a data bus connecting a transmit recieve and upload classes
 */

#include "DataController.h"
#include<vector>
#include<string>
#include <stdlib.h>
#include<iostream>
#include "CommandObjectList.h"
#include "Encoder.h"
#include "IRCComm.h"
#include "Threadcomm.h"
#include "windows.h"

using namespace std;

DataController::DataController():msg(){
    thread=true;
    msgtosend=false;
}

void DataController::uploadRawData(char* carray){

}

void DataController::uploadTempData(char* c){

}

void DataController::uploadSciData(char* c){

}

void DataController::uploadPosData(char* c){

}

void DataController::uploadJPGData(char* c){
    string init = "/JPG:";
    int mi=0;
    int totallen = sizeof(c)+init.length();
    char formc[totallen];
    for(int i=0;i<totallen;i++){
        if(i<init.length()){
            formc[i]=init.at(i);
        }else{
            formc[i]=c[mi];
            mi++;
        }
    }
    irc.sendData(formc);
}

/*
Takes a decoded data packet and formats then uploads it
 */
void DataController::uploadDPacket(d_packet pkt){

    switch(pkt.type){
        case 1 :
            uploadJPGData(pkt.data);
            break;
        case 2 :
            uploadPosData(pkt.data);
            break;
        case 3 :
            uploadSciData(pkt.data);
            break;
        case 4 :
            uploadTempData(pkt.data);
            break;
        case 5 :
            uploadRawData(pkt.data);
            break;


    }
}

    void DataController::initThreadLoop(int refresh,thread_c* dctoirc,thread_c* rectodc,thread_c* chtodc){
        thread=true;
        while(thread){
            if(rectodc->unread){

            }
            if(chtodc->unread){

            }
            if(msgtosend){

            }
        }

    }




