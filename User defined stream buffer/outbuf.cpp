//
// Created by 云非雪墨非白 on 2021/6/16.
//

#include "outbuf.h"

outbuf::outbuf() {
    /*
     * Initialize the write buffer,
     * and call overflow() as long as there is one character interval remaining
     */
    setp(buffer, buffer + (bufferSize - 1));
}

outbuf::~outbuf() {
    sync();
}

int outbuf::flushBuffer() {
    int num = pptr() - pbase();

//    Write characters to the standard output channel (file descriptor 1)
    if (write(1, buffer, num) != num) {
        return EOF;
    }

//    reset put pointer accordingly
    pbump(-num);
    return num;
}

int outbuf::overflow(int c) {
    if (c != EOF) {

//        insert character into the buffer
        *pptr() = c;
        pbump(1);
    }

//    flush the buffer
    if (flushBuffer() == EOF) {

//        error
        return EOF;
    }
    return c;
}

int outbuf::sync() {
    if (flushBuffer() == EOF) {

//        error
        return -1;
    }
    return 0;
}
