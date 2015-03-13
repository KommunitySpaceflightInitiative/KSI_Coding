/* 
 * File:   DataController.h
 * Author: Jtsfour
 *
 * Created on March 12, 2015, 10:13 AM
 */

#ifndef DATACONTROLLER_H
#define	DATACONTROLLER_H

#include<vector>

class DataController {
public:
    DataController();
    struct jpg_clean_r cleanJPGData(char* carray);
    void uploadData(char* c);
    
    
    
    
    
private:
    

};

struct jpg_clean_r {
    int* corruptids;
    char* cchars;
    bool anycorrupt;
};

#endif	/* DATACONTROLLER_H */

