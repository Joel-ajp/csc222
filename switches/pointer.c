#include <stdio.h>

void valueAndAddress(char name[], int a) {
    printf("Value of %s = %d\n" , name, a);
    printf("Address of %s = %p\n" , name, &a);
}

int main() {
    int p = 50;
    int *d = &p;

    valueAndAddress("p", p);
    valueAndAddress("*d", *d);

    printf("\nsettings *d = 5005\n");
    *d = 5005;
    valueAndAddress("p", p);
    valueAndAddress("*d", *d);

    return 0;
}

