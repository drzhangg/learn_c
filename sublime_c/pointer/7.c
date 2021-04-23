#include <stdio.h>

int main(){
    int arr[] ={99,105,100,88,252};
    int len = sizeof(arr)/sizeof(int);
    // printf("%d\n",sizeof(arr));
    // printf("%d\n",sizeof(int));
    printf("%d\n",len);
    int i;
    for (i = 0;i<len;i++){
        printf("%d ",*(arr + i));
    }
    printf("\n");
    return 0;
}