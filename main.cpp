#include "plist_test.h"
#include "plist_test.cpp"

#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    HB_SHR::PList<int> myPList;
    //    myPList[2] = 2;
    //    int a = myPList[3];
    //    std::cout << a << std::endl;
    myPList.set(1, 'e');
    cout << myPList.get_char(1);
    string a = "asdasd";
    myPList.set(4, a);
    cout << myPList.get_string(4);
    getchar();
    return 0;
}