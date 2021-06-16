//
// Created by 云非雪墨非白 on 2021/6/16.
//
/*
 * stream缓冲区实作出函数xsputn(),避免发送字符序列到该stream缓冲区时,对每个字符都调用overflow()
 * 此函数在一次调用过程中将整个字符序列写入由文件描述符fd指定的文件内,并返回成功写入的字符数
 */
#ifndef USER_DEFINED_STREAM_BUFFER_FDOUTBUF_H
#define USER_DEFINED_STREAM_BUFFER_FDOUTBUF_H

#include <iostream>
#include <streambuf>
#include <cstdio>

using namespace std;

extern "C" {
int write(int fd, const char *buf, int num);
}

class fdoutbuf : public streambuf {
protected:
    int fd;

public:
    /**
     * constructor
     * @param _fd
     */
    explicit fdoutbuf(int _fd) : fd(_fd) {
    }

protected:
    /**
     * write one charactor
     * @param c
     * @return
     */
    int_type overflow(int_type c) override;

    /**
     * write multiple characters
     * @param s
     * @param num
     * @return
     */
    streamsize xsputn(const char *s, streamsize num) override;
};

class fdostream : public ostream {
protected:
    fdoutbuf buf;

public:
    explicit fdostream(int fd);
};


#endif //USER_DEFINED_STREAM_BUFFER_FDOUTBUF_H
