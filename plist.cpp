#include "plist.h"

namespace HB_SHR {
    template <typename T>
    PList <T>::~PList(){
        delete l1;
        delete l2;
    }

    template <typename T>
    PList <T>::PList(){
        std::cout << "constrator default" << std::endl;
        l1 = new std::vector < T > ();
        l2 = new std::vector < void * > ();
    }

}
