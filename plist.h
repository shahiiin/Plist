
#ifndef _P_LIST_H_
#define _P_LIST_H_

#include <vector>
#include <iostream>
#include <stdio.h>

namespace HB_SHR {

    template <typename T>
    class PList {
        private:
            std::vector < T > * l1;
            std::vector < void * > * l2;

        public:
            PList();

            bool set_char(T, char);
            bool set_char_start(T, char *);
            bool set_short(T, short);
            bool set_int(T, int);
            bool set_long(T, long);
            bool set_double(T, double);
            bool set_float(T, float);
            bool set_bool(T, bool);
            bool set_void(T, void *);

            char get_char(T);
            char * get_char_start(T);
            short get_short(T);
            int get_int(T);
            long get_long(T);
            double get_double(T);
            float get_float(T);
            bool get_bool(T);
            void * get_void(T);

            unsigned int get_size();

            ~PList();
    };


}

#endif
