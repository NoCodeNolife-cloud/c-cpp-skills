//
// Created by 云非雪墨非白 on 2021/6/16.
//

#include "fdoutbuf.h"

int fdoutbuf::overflow(int c) {
    if (c != EOF) {
        char z = c;
        if (write(fd, &z, 1) != 1) {
            return EOF;
        }
    }
    return c;
}

streamsize fdoutbuf::xsputn(const char *s, streamsize num) {
    return write(fd, s, num);
}

fdostream::fdostream(int fd) : ostream(nullptr), buf(fd) {
    rdbuf(&buf);
}