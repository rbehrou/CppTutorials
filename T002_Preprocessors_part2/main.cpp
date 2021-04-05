#include <iostream>

using namespace std;

#define NUM 1

int main()
{
 
 // example 1
#ifdef NUM // format: #ifdef identifier
    cout << "NUM is defined, and the value is: " << NUM << endl;
#else 
    #define NUM 2
    cout << "NUM is not defined! Defining NUM now, and the value is: " << NUM << endl;
#endif

// example 2
#undef NUM

#ifndef NUM
    #define NUM 5
    cout << "NUM is not defined! Defining NUM now, and the value is: " << NUM << endl;
#elif NUM == 2 // format: #elif expression
    cout << "NUM is defined, and the value is: " << NUM << endl;
#else
    cout << "The value of NUM is: " << NUM << endl;
#endif

// example 3
#if !defined(ABC) // equivalent to #ifndef ABC
    cout << "Undefined ABC!" << endl;
#endif

// example 4
#define ABC 5

#if defined(ABC)  && (NUM <= 3*4-2) // equivalent to #ifdef ABC && (NUM <= 3*4-2)
    cout << "Defined ABC with value " << ABC << " and the value of NUM is less than " << 3*4-2 << endl;
#endif

}