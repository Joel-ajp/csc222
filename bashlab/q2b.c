/*
* Name(s): Joel Porter
* Date: 2.15.24
* Program Description: part q2b of the lab
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char convertToAscii(char *str) {
    char *end;
    long int bin = strtol(str, &end, 2);
    return (char) bin;
}

int main(int argc, char *argv[]) {
    char result[512];
    char resultStr[512];

    for (int i = 2; i < argc; i++) {
        char *curr = argv[i];
        for (int j = 3; j < 10; j++) {
            if (curr[j] == '-') {
                strcat(result, "0");
                continue;
            }
            strcat(result, "1");
        }

        strcat(result, " ");
    }

    
    char* token = strtok(result, " ");
    char c;
    while (token != NULL) {
        c = convertToAscii(token);
        strncat(resultStr, &c, 1);
        token = strtok(NULL, " ");
    }
    printf("%s\n", resultStr);
}