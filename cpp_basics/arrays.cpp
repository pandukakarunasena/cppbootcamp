#include <iostream>

using namespace std;

// declaring arrays
// type arrayName [ arraySize ];

int main(int argc, char const *argv[])
{
    // declaration
    // double balance[10];
    // with above cant use below.
    // balance = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // either you have add elements one by one or initialize array when declaring.

    double balance[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << &balance << endl;

    int n[10];

    for (int i = 0; i < 10; i++)
    {
        n[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << n[i] << endl;
    }

    // when checking address of the array it will return the starting elements address because arrays is a contigous block of memory.
    cout << "starting address of n " << &n << endl;

    // get addresses of all elements.
    for (int i = 0; i < 10; i++)
    {
        cout << &n[i] << endl;
    }

    // to print the addresses of a char array you have to use static_cast<void *> 
    // this will cast the address to a void pointer of any type.
    // using &geeting[i] does not work here. need to check why.
    
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "starting address of greeting char array " << static_cast<void *>(&greeting) << endl;

    for (int i = 0; i < sizeof(greeting); i++)
    {
        std::cout << "Address of greeting[" << i << "]: " << static_cast<void *>(&greeting[i]) << std::endl;
    }


    char hello[] = "Hello";
    cout << "starting address of hello char array " << static_cast<void *>(&hello) << endl;

    for (int i = 0; i < sizeof(hello); i++)
    {
        cout << static_cast<void *>(&hello[i]) << endl;
    }
}
