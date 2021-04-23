#include <stdio.h>

int main(){
    int x,y, *px = &x, *py = &y;
    y = *px + 5;
    printf("%d,%d,%d,%d\n",x,y,*px,*py);
    y = ++*px;
    printf("%d,%d,%d,%d\n",x,y,*px,*py);
    y=*px++;
    printf("%d,%d,%d,%d\n",x,y,*px,*py);
    py = px;
    printf("%d,%d,%d,%d\n",x,y,*px,*py);
}