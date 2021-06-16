//
// Created by 云非雪墨非白 on 2021/6/15.
//

#ifndef USER_DEFINED_STREAM_BUFFER_BASIC_OUTBUF_H
#define USER_DEFINED_STREAM_BUFFER_BASIC_OUTBUF_H

#include <streambuf>
#include <locale>
#include <cstdlib>

using namespace std;

template<class charT, class traits=char_traits<charT>>
class basic_outbuf : public basic_streambuf<charT, traits> {
protected:
    /*
     * central output function
     * - print characters in uppercase mode
     */
    virtual typename traits::int_type overflow(typename traits::int_type c) {
        if (!traits::eq_int_type(c, traits::eof())) {

//            convert lowercase to uppercase
            c = toupper(c);

//            and write the character to uppercase
            if (putchar(c) == EOF) {
                return traits::eof();
            }
        }
        return traits::not_eof(c);
    }
};

// rename
typedef basic_outbuf<char> outbuf;
typedef basic_outbuf<wchar_t> woutbuf;

#endif //USER_DEFINED_STREAM_BUFFER_BASIC_OUTBUF_H
