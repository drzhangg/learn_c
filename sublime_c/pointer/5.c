#include <stdio.h>

int main(){
    int a, b, *p = &a;  
    printf("%p,%p,%p\n",&a,&b,p);
    printf("%d,%d,%d\n",a,b,*p); //0,0,0
    *p = 100;  
    printf("%p,%p,%p\n",&a,&b,p);
    printf("%d,%d,%d\n",a,b,*p);//100,0,100
    b = *p;
    printf("%p,%p,%p\n",&a,&b,p);
    printf("%d,%d,%d\n",a,b,*p);//100,100,100

    return 0;
}