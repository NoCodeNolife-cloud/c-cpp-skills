//
// Created by 云非雪墨非白 on 2021/6/16.
//

#ifndef USER_DEFINED_INPUT_BUFFER_INBUF_H
#define USER_DEFINED_INPUT_BUFFER_INBUF_H

#include <cstdio>
#include <cstring>
#include <streambuf>

using namespace std;

class inbuf : public streambuf {
protected:
    /*
     * data buffer:
     * - at most, four characters in putback area plus
     * - at most, six characters in ordinary read buffer
     */
    static const int bufferSize = 10;
    char buffer[bufferSize];

public:
    /**
     * constructor
     * - initialize empty data buffer
     * - no putback area
     * => force underflow()
     */
    inbuf();

protected:
    /**
     * insert new characters into the buffer
     * @return
     */
    virtual int_type underflow();
};

#endif //USER_DEFINED_INPUT_BUFFER_INBUF_H
