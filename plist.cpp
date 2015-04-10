#include "plist.h"

namespace HB_SHR_PLIST{

    template <typename T>
    PList <T>::~PList(){
        delete[] data;
        for (int i = 0 ; i < l1->size() ; ++i){
            delete[] l1[i];
        }
        delete[] * l1;
        delete[] * l2;
    }

    template <typename T>
    PList <T>::PList(){
        std::cout << "constrator 2: " << std::endl;
        l1 = new std::vector < T >();
        l2 = new std::vector < void * >();
    }

    template <typename T>
    PList <T>::PList(T in){
        std::cout << "constrator 2: " << in << std::endl;
        l1 = new std::vector < T >();
        l2 = new std::vector < void * >();
    }

    template <typename T>
    void PList <T>::addData(T in){
        std::cout << "distractor" << std::endl;
        std::cout << in << std::endl;
    }
}
