#include <stdio.h>

int main(){
    int arr[] = {99,14,100,888,252};
    int *p = &arr[2];
    printf("%d, %d, %d, %d, %d\n", *(p-2), *(p-1), *p, *(p+1), *(p+2) );
    return 0;
}