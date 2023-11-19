#include <iostream>

using namespace std;

// char, int and double types can have a modifier preceding them.
// modifiers are signed, unsigned, long, short
// int << signed, unsigned, long, short
// char << signed, unsigned
// double << double
// size of short is 2 bytes
// size of long is 8 bytes

int main(int argc, char const *argv[])
{

    short int i;
    short unsigned int j;

    j = 50000;

    i=j;
    cout << i << " " << j << endl;
    cout << " size of i and j are " << sizeof(i) << " " << sizeof(j) << endl;
    return 0;
}
