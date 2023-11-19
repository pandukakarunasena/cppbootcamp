#include <iostream>

using namespace std;


// storage class defines the visibility and life time of 
// a variable or a function.
// storage classes.
// auto   << default storage class for local vars. 
// register 
// << variable should be stored in the register instead of 
// << RAM. the max size is defined by the register size( usually a word ).
// << can't have unary '&' operator applied to it as there is no
// << no memory address.
// << should store vars which need quick access.
// << it MIGHT be stored in register depeding on hardware impl. 
// static  
// 
//
//
//
// extern
// mutable << applies only to class objects

int main(int argc, char const *argv[])
{
    short register int num = 20;
    extern int exnum;
    static int snum = 20;
    auto anum = 20;
    return 0;
}   

