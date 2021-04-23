#include <stdio.h>

int main() {

    int cnt;
//    for (j = 1; cnt < 50; j++) {
    int j = 0;
    while (cnt < 50) {
        int i;
        int isPrime = 1;
        for (i = 2; i < j; i++) {
            if (j % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            cnt++;
            printf("%d ", j);

            if (cnt % 5 == 0) {
                printf("\n");
            }
        }
        j++;
    }

    return 0;
}

