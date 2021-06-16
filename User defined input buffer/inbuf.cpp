//
// Created by 云非雪墨非白 on 2021/6/16.
//

#include <io.h>
#include "inbuf.h"

inbuf::inbuf() {
    /*
     * setg()
     * - beginning of putback area
     * - read position
     * - end position
     */
    setg(buffer + 4, buffer + 4, buffer + 4);
}

int inbuf::underflow() {
//    is read position before end of buffer
    if (gptr() < egptr()) {
        return *gptr();
    }

    /*
     * process size of putback area
     * - use number of characters read
     * - but at most four
     */
    int numPutback;
    numPutback = gptr() - eback();
    if (numPutback > 4) {
        numPutback = 4;
    }

    /*
     * copy up to four characters previously read into
     * the putback buffer (area of first four characters)
     */
    memcpy(buffer + (4 - numPutback), gptr() - numPutback, numPutback);

//    read new characters
    int num;
    num = read(0, buffer + 4, bufferSize - 4);
    if (num <= 0) {

//        error or eof
        return EOF;
    }

//    reset next character
    setg(buffer + (4 - numPutback), buffer + 4, buffer + 4 + num);

//    return next character
    return *gptr();
}
