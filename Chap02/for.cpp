// for.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int main()
{
    char s[]="string";
    for(char *p=s;*p;++p){
        printf("char is %c\n",*p);
    }

    return 0;
}
