#include <iostream>

using namespace std;

// two ways to define constants
// 1. using #define preprocessor
// 2. using const keyword

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(int argc, char const *argv[])
{

    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;

    const float PI = 3.1423;

    float area_circle = 2*PI*20*20;

    cout << " Area of the circle with 20 is " << area_circle << endl;
    return 0;
}
