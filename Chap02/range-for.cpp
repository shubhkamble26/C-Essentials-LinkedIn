// range-for.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int main()
{
    char arr[]="String";

    for(char i : arr) {
        if(i==0) break;
        printf("i is %c\n", i);
    }
    return 0;
}
