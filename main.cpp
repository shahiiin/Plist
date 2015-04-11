#include "plist.h"
#include "plist.cpp"

#include <iostream>
#include <vector>

int main(){
    std::cout << "Hello World" << std::endl;

    HB_SHR::PList<int> myPList;
    myPList[2] = 2;
    int a = myPList[3];
    std::cout << a << std::endl;

    return 0;
}
