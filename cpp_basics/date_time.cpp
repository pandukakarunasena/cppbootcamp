#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << dt << endl;


    // time_t is a type
    // time(0) function returns the epoch time
    time_t current_time = time(0);

    // localtime function requires a pointer of current time and returns a pointer 
    // tm struct
    tm *ltm = localtime(&current_time );

    // read the attributes in the struct
    // there are two ways for it.
    // (*ltm).tm_year or ltm->tm_year
    cout << (*ltm).tm_year << endl;
    return 0;
}