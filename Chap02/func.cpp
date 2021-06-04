// func.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int func(int i,const char* s)
{
    printf("this is func(%i,%s)",i,s);
    return 2*i;
}

int main()
{
    puts("this is main()\n");
    int x=func(47,"string");
    printf("x is, %d\n",x);
    return 0;
}

