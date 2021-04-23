#include <stdio.h>

int func() {
    int i = 100;
    return &i;
}

int main() {
    int *p = func(), n;
    n = *p;
    printf("value = %d\n", n);
    return 0;
}