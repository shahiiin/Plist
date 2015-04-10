
#ifndef _P_LIST_
#define _P_LIST_

#include <vector>
#include <iostream>
#include <stdio.h>

namespace HB_SHR_PLIST {

    template <typename T>
    class PList {
        private:
            std::vector < std::pair< T, void * > * > * data;
            std::vector < T > * l1;
            std::vector < void * > * l2;

        public:
            PList();
            PList(T);
            void addData(T);
            ~PList();
    };

}

#endif
