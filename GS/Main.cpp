/*
 * File:   main.cpp
 * Author: Jtsfour
 *
 * Created on March 10, 2015, 8:30 PM
 */

#include <cstdlib>
#include<iostream>
#include "Threadcomm.h"
#include "DataController.h"
#include "Reciever.h"
#include "IRCComm.h"
#include "CommandHandler.h"
#include "windows.h"
#include "process.h"

using namespace std;
/*
This class will initialize the threads and point them to the initThreadLoop functions
*/
int main(int argc, char** argv){
    cout<<"TEst"<<endl;
    struct thread_c irctoch;//IRCComm to Command Handler
    struct thread_c dctoirc;//Data Controller to IRCComm
    struct thread_c rectodc;//Reciever to Data Controller
    struct thread_c chtodc;//Command Handler to Data Controller

    //int refreshdc = 100;

    DataController dc;
    Reciever rec;
    IRCComm irc;
    CommandHandler ch;
    //_beginthread(NULL,0,NULL,void (*dc.initThreadLoop)(refreshdc,&dctoirc,&rectodc,&chtodc),NULL,0,NULL);


    return 0;
}


