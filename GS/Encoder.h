/* 
 * File:   Encoder.h
 * Author: admin
 *
 * Created on March 13, 2015, 1:12 PM
 * 
 * This class will handle encoding and decoding of packets for LIS
 * This will be empty until we design final encoding method
 */

#ifndef ENCODER_H
#define	ENCODER_H


//Encoded Packet
struct e_packet{
    int id;
    unsigned char* data;
};
//Decoded Packet
 struct d_packet{
    int id;
    unsigned char type;//1 byte that determines the type of packet science ,pos etc.
    char* data;
};



class Encoder {
public:
    Encoder();
    d_packet decode(e_packet pkt);
    e_packet encode(char* c);
    
private:

};


#endif	/* ENCODER_H */

