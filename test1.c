#include <stdio.h>

void niz(a) {
    int i = a;
    while (i < (a * 3 + 1)){
        printf("%d\t", i);
        i++;
    }
}

void forpetlja(a) {
    int i;
    for (i = a; i  < (a * 3 + 1); i++) {
        printf("%d\t", i);
    }
}

int main() {
    printf("Hello World!\n");
    int a = 2;
    int b = 10;
    for (int i = a; i < b; ++i) {
        printf("%d\n", i);
    }
    int i = a;
    while (i < (a * 3)){
        printf("%d\t", i);
        i++;
    }
    printf("\n");
    niz(a);
    printf("\n\n");
    forpetlja(a);
    return 0;
}
