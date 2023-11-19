#include <iostream>

using namespace std;

// variable declaration using extern
extern int a,b;
extern int c;
extern float f;

int main(int argc, char const *argv[])
{
    
    // variable declaration
    int a, b;
    int c;
    float f;
    int num;
    // actual initialization
    a = 10;
    b = 20;
    c = a+b;

    cout << " value of c is " << c << endl;
    
    f = 10/3.0;

    cout << " value of f is " << f << endl;
    cout << " size of f is " << sizeof(f) << endl;
   
    cout << " num is " << num;
    return 0;
}
