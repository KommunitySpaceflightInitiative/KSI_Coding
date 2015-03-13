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

using namespace std;

DataController::DataController() {
    
}

void DataController::uploadRawData(char* carray){

}

/*
 * Cleans out array of Incomplete or corrupted data pieces then uploads 
 * the rest then will then be returned as an array of ID numbers which will be subsequently used to ask LIS for the corrupted pieces back
 * for a data piece to be considered complete it must start with 4 digits and end in a semicolon 
 * this will be changed depending on the final data encoding method we choose
 */
jpg_clean_r DataController::cleanJPGData(char* carray){
    int cid[sizeof(carray)/12*4+1];             //array of the ids of corrupted data pieces
    vector<char> cchar;//Clean chars the ones that get uploaded
    int idcount = 1;
    int ci = 0;
    int cx = 0;
    int cidc = 0;
    bool mloop;
    bool clean = true;
    bool anyCorrupt = false;
    for(int i0 = 0;mloop;i0++){
        char ca[12];
        int tid[4];
        for(int i1=0;i1<=11;i1++ && ci++){//NOTE TO SELF possible problem not calling ci++ at the end of loop
            if(i1<=3&&carray[ci]=='0'||'1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'){
                ca[i1]=carray[ci];
                tid[i1]=carray[ci];
            }else if(i1<=3){
                clean==false;
            }
            if(i1>3){
                ca[i1]=carray[ci];
            }
            if(i1==11 && clean){
                if(carray[ci]==';'){
                    for(int i2=0;i2<=11;i2++){
                        cchar.push_back(ca[i2]);
                    }       
                }else{
                    clean=false;
                }
            }
            if(!clean){
                cid[cidc]=idcount;
                cidc++;
             if(!anyCorrupt)anyCorrupt=true;
         }
        }
       idcount++;
       cx++;
       clean=true;
       
    }
    for (int i3=0;i3<sizeof(carray);i3++) {
        carray[i3] = '\0';
     }
    jpg_clean_r robj;
    robj.corruptids=cid;
    robj.anycorrupt=anyCorrupt;
    char c0[sizeof(carray)];
    for(int i4=0;i4<sizeof(carray);i4++){
        c0[i4]=cchar.at(i4);
    }
    robj.cchars=c0;
    
    
}

void DataController::uploadTempData(char* c){
    
}

void DataController::uploadSciData(char* c){
    
}

void DataController::uploadPosData(char* c){
    
}

void DataController::uploadJPGData(char* c){
    
}

/*Takes a decoded data packet and formats then uploads it
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


