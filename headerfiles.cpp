// There are two types of header files in c++
// 1.System Header Files : comes with the compiler
#include <iostream>

// 2.User defined header files: it is written by the programmer
#include "./header_files/sum.h"


using namespace std;

int main()
{

    cout << "Radhe Radhe !!";
    int sums = sum(1,6);

    cout << "the sum from header file returned : \n" << sums;


    return 0;
}