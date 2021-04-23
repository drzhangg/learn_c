#include <stdio.h>

int main() {
    int nums[10];
    int i;
    
    for (i = 0;i<10;i++){
        scanf("%d",&nums[i]);
    }

    for (i = 0;i<10;i++){
        printf("%d ",nums[i]);
    }
    return 0;
}