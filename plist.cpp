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

    template <typename T>
    unsigned int PList<T>::get_size(){
        return l1->size();
    }

    template <typename T>
    void PList<T>::clear(){
        l1->clear();
        for (int i = 0 ; i < l2->size(); ++i){
            delete l2[i];
        }
        l2->clear();
    }

    template <typename T>
    int PList<T>::find(T){
        it = new std::vector <T>::iterator();
    }

    template <typename T>
    void PList<T>::set(T, char){

    }

}
