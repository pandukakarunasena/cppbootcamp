#include <iostream>

using namespace std;

int main()
{
    // initalize an int 
    int num = 20;

    // define a pointer and assign the address of num to it.
    int *pnum = &num;

    // you can get the memory address from pnum
    cout << "The memory address of the num is " << pnum << endl;

    // you can access the value of the memory address by *pnum.
    cout << "The value in memory address " << pnum <<  " is " << *pnum << endl;



    return 0;
}