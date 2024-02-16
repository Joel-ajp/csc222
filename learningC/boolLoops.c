#include <stdio.h>

int main() {

    for (int x=0; x<5; ++x) {
        printf("for %d\n", x);
    }

    printf("While loop");

    int y = 5;
    while (y != 0) {
        printf("while %d\n", y);
        --y;
    }

    int z = 3;
    do {
        printf("do while %d\n", z);
        --z;
    } while (z != 0);
}
