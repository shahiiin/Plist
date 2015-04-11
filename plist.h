
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
            std::vector < T >::iterator * it;

        public:
            PList();

            void set(T, char);
            void set(T, char *);
            void set(T, short);
            void set(T, int);
            void set(T, long);
            void set(T, double);
            void set(T, float);
            void set(T, bool);
            void set(T, void *);

            char    get_char(T);
            char *  get_char_star(T);
            short   get_short(T);
            int     get_int(T);
            long    get_long(T);
            double  get_double(T);
            float   get_float(T);
            bool    get_bool(T);
            void *  get_void(T);

            bool set_item_at(unsigned int, void *);
            bool set_item_at(unsigned int, char *);
            bool set_item_at(unsigned int, char);
            bool set_item_at(unsigned int, short);
            bool set_item_at(unsigned int, int);
            bool set_item_at(unsigned int, long);
            bool set_item_at(unsigned int, double);
            bool set_item_at(unsigned int, float);
            bool set_item_at(unsigned int, bool);

            unsigned int get_size();
            void clear();
            int find(T);

            ~PList();
    };


}

#endif
