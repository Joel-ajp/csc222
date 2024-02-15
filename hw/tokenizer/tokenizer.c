// Student: Joel Porter
// Date: 1/4/24
// Class: CSC 222-003
// HomeWork: Tokenizer.c
////////////////////////

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// This function I found online to trim the right side of extra spaces. 
// Extra token counting occured if there were extra spaces at the end of user inputs. 
// Source : https://stackoverflow.com/questions/656542/trim-a-string-in-c
char *rtrim(char *s) {
    char* back = s + strlen(s);
    while (isspace(*--back));
    *(back+1) = '\0';
    return s;
}

int main() {
    // Decloration of variables needed
    char userInput[256]; 
    char exit[] = "exit";
    const char space[] = " ";
    char *tokUserInput;
    int tokensRead;

    // Main loop of the function
    for (;;) {
        printf("$ ");
        // Receives and trims user input
        fgets(userInput, sizeof(userInput), stdin);
        rtrim(userInput);
        // Stops the program if the input is 'exit'
        if (!strcmp(userInput, exit)) { return 0; } 
        printf("Line reads: %s\n", userInput);
        // Tokenizes the user input 
        tokUserInput = strtok(userInput, space);
        printf("Token(s): \n");
        tokensRead = 0;

        // Loops through the pointers and prints each token
        while (tokUserInput != NULL) {
            ++tokensRead;
            printf("%s\n", tokUserInput);
            tokUserInput = strtok(NULL, space);
        }
        printf("%d token(s) read\n", tokensRead);
    }

    return 0;
}