/*
* Name(s): Joel Porter
* Date: 1.11.24
* Program Description: The arguement parser
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Start here!
    if (argc < 2 || argc > 6) {
        printf("Invalid number of arguements ");
        return 0;
    }
    char result[argc * 2];

    for (int i = 0; i < argc; ++i) {
        int index;
        if (i == 0) {
            char character[3]; 
            character[0] = argv[i][2];
            character[1] = ' ';
            strcat(result, character);
            continue;
        }

        index = i % 2;
        char character[3]; 
        character[0] = argv[i][index];
        character[1] = ' ';
        strcat(result, character);
    }

    printf("%s", result);
    return 0;
}