//
// Created by 云非雪墨非白 on 2021/6/16.
//
/*
 *
 */
#ifndef USER_DEFINED_STREAM_BUFFER_OUTBUF_H
#define USER_DEFINED_STREAM_BUFFER_OUTBUF_H

#include <iostream>
#include <streambuf>

using namespace std;

extern "C" {
int write(int fd, const char *buf, int num);
}

class outbuf : public streambuf {
protected:
//    size of data buffer
    static const int bufferSize = 10;

//    data buffer
    char buffer[bufferSize];

public:
    /**
     * constructor
     * - initialize data buffer
     * - one character less to let the bufferSizeth character
     * cause a call of overflow
     */
    outbuf();

    /**
     * destructor
     * - flush data buffer
     */
    ~outbuf() override;

protected:
    /**
     * flush the characters in the buffer
     * @return
     */
    int flushBuffer();

    /**
     * buffer full
     * - write c and all previous characters
     * @param c
     * @return
     */
    int_type overflow(int_type c) override;

    /**
     * synchronize data with file/destination
     * * flush the data in the buffer
     * @return
     */
    int sync() override;
};


#endif //USER_DEFINED_STREAM_BUFFER_OUTBUF_H
