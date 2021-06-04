// working.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>
#include<iostream>
using namespace std;

int & f(int &i){
    return ++i;
}

int main()
{
    int i=5;
    f(i) = 42;
    printf("f(i) is %d\n",i);
    return 0;
}
