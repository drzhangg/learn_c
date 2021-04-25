#include <stdio.h>

int main(){
    struct bs{
        unsigned m;
        unsigned n:4;
        unsigned char ch:6;
    } a = {0xad,0xE,'$'};

    printf("%#x, %#x, %c\n",a.m,a.n,a.ch);

    //更改值后再次输出
    a.m = 0xb8901c;
    a.n = 0x2d;
    a.ch = 'z';
    printf("%#x, %#x, %c\n", a.m, a.n, a.ch);
    return 0;
}