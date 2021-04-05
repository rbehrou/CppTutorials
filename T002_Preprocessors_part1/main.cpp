#include <iostream>

using namespace std;

#define PI 3.14
#define getSum(a,b) a+b

int main()
{
    cout << PI << endl;
    
    int x1 = 2;
    int y1 = 4;
    cout << getSum(x1,y1) << endl;
        
    double x2 = 3.4;
    double y2 = 5.7;
    cout << getSum(x2,y2) << endl;
    
    #undef PI
    #define PI 4.14
    cout << PI << endl;
    
    #undef getSum
    #define getSum(a,b) a+b+2
    cout << getSum(x2,y2) << endl;
}