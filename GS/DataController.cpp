/* 
 * File:   DataController.cpp
 * Author: Jtsfour
 * 
 * Created on March 12, 2015, 10:13 AM
 */

#include "DataController.h"
#include<vector>

using namespace std;

DataController::DataController() {
    
}

void DataController::uploadData(char* carray){

}

/*
 * Cleans out array of Incomplete or corrupted data pieces then uploads 
 * the rest then will then be returned as an array of ID numbers to ask  LIS for corrupted data back
 * for a data piece to be considered complete it must start with 4 digits and end in a semicolon 
 */
int* DataController::uploadJPGData(char* carray){
    vector<int> id;
    char idc[4];
    bool loop = true;
    bool clean;
    for(int i =0;loop==true;i++){
        if(i<=4&&carray[i]=='0'||'1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'){
           idc[i]=carray[i]; 
        }else{
            clean=false;
        }
        if(i>4){
            
        }
    }
}
