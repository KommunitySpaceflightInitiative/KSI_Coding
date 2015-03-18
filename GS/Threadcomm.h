#ifndef THREADCOMM_H
#define THREADCOMM_H


struct thread_c{
    bool unread;
    char* data;
    std::string from;
};

struct dc_msg{
    std::string to;
    char data[100];


};

#endif // THREADCOMM_H
