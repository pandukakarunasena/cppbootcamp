#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // enumerated type declares an optional type name and a set of zero of more identifiers that can be used as values of the type.
    // For example, the following code defines an enumeration of colors called colors and the variable c of type color. Finally, c is assigned the value "green".

    // idea: there is a variable called c that the type is color and the color can be red, green, blue;
    enum color {red, green, blue} c;
    c = green;
    cout << "c is a " << typeid(c).name() << endl;

    enum day {sunday, monday, tuesday, thursday} d;
    d = sunday;
    cout << "d is a " << typeid(d).name() << endl;
   
    return 0;
}
