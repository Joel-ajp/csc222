/*
* Name(s): Joel Porter
* Date: 1.11.24
* Program Description: Decimal to binary converter
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char input[]) {
    int length = strlen(input);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char tmp = input[start];
        input[start] = input[end];
        input[end] = tmp;

        ++start;
        --end;
    }
}


int main() {
    // Start here!
    for (;;) {
        char strInput[128];
        char result[sizeof(strInput)];
        printf("Enter an integer (-1 to quit) ");
        scanf("%s", strInput);
        int input = atoi(strInput);
        if (input < 0) {
            printf("Bye.\n");
            return 0; 
        }

        while (input > 0) {
            char character;
            char toCat[2];
            character = input % 2;
            toCat[0] = character +'0';
            input = input / 2;
            strcat(result, toCat);
        }

        reverseString(result);

        printf("Binary equivilent: %s\n", result);
        result[0] = '\0';
    }

    return 0;
}