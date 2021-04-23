#include <stdio.h>

int main(){
    int a = 11;
    int *p = &a;
    printf("%d,%d\n",a,*p);
    printf("%p,%p",&a,p);

    return 0;
}