/* 
 * File:   main.cpp
 * Author: Jtsfour
 *
 * Created on March 10, 2015, 8:30 PM
 */

#include <cstdlib>
#include "IRCConnback.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    IRCConn ircc("irc.esper.net",6667,"da_bot","","#kerbalspaceflight");
    return 0;
}

