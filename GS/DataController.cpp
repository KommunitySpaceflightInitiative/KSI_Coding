/* 
 * File:   DataController.cpp
 * Author: Jtsfour
 * 
 * Created on March 12, 2015, 10:13 AM
 */

#include "DataController.h"
#include<vector>
#include<string>
#include <stdlib.h> 

using namespace std;

DataController::DataController() {
    
}

void DataController::uploadData(char* carray){

}

/*
 * Cleans out array of Incomplete or corrupted data pieces then uploads 
 * the rest then will then be returned as an array of ID numbers which will be subsequently used to ask LIS for the corrupted pieces back
 * for a data piece to be considered complete it must start with 4 digits and end in a semicolon 
 * this will be changed depending on the final data encoding method we choose
 */
int* DataController::uploadJPGData(char* carray){
    vector<int> id;
    char data[12];
    int i0 = 0;
    char idc[4];
    bool loop = true;
    bool clean = true;
    bool b1 = true;
    for(int i1 =0;i1<=11;i1++){
        if(i1<=4&&carray[i1]=='0'||'1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'){
           idc[i1]=carray[i1]; 
        }else if(i1<=4){
            clean=false;
        }
        if(i1>4){
            if(b1 && clean==false){
                string ids = idc;
                id.push_back(atoi(ids.c_str())); 
                b1=false;
                break;
            }
            if(carray[i1]==';' && i1!=11){
                clean=false;
                
            }
        }
        data[i1]=carray[i1];
    }
}
