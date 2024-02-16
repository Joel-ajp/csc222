#include <stdio.h>
#include <string.h>


// char decimalToBin(int decimal) {
//     char bin[8];
//     strcpy(bin, "");

//     while (decimal != 0) {
//         printf("%d", decimal % 2 );
//         strncat(bin, result, 1);
//     }
// }


int main() {
    int foo = 12;
    char bar = foo % 2;
    printf("%c", bar );

    return 0;
}
