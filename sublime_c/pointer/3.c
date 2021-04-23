#include <stdio.h>

int main(){
    int a=14,b=19,c=200;
    int *p = &a;
    printf("%p,%p\n",&a,p);
    printf("%d\n",*p);
    *p = b;
    printf("%d\n",*p);
    c = *p;
    printf("%d,%d,%d,%d",a,b,c,*p);
    return 0;
}