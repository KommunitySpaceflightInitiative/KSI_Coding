/* 
 * File:   DataController.h
 * Author: Jtsfour
 *
 * Created on March 12, 2015, 10:13 AM
 */

#ifndef DATACONTROLLER_H
#define	DATACONTROLLER_H
#include<vector>
#include<string>
#include "Encoder.h"

class DataController {
public:
    DataController();
    struct jpg_clean_r cleanJPGData(char* carray);
    void uploadRawData(char* c);
    void uploadTempData(char* c);
    void uploadSciData(char* c);
    void uploadPosData(char* c);
    void uploadJPGData(char* c);
    void uploadDPacket(d_packet pkt);
    
    
    
    
    
    
private:
    
  
};

struct jpg_clean_r {
    int* corruptids;
    char* cchars;
    bool anycorrupt;
};

#endif	/* DATACONTROLLER_H */

