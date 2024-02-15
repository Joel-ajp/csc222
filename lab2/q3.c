/*
* Name(s): Joel Porter, Chase Dowdy, Memphis Dalme
* Date: 1.18.24
* Program Description: q3 of the second lab; creating child process
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <wait.h>

int main(int argc, char *argv[]) {
    // Returns if there is an invalid number of arguments
    if (argc != 2) {
        printf("usage: ./q3 <executable>\n");
        printf("e.g., ./q3 ./q2\n");
        return 0;
    }

    int id = fork();

    // If we are running in the child process continue
    if (id == 0) {
        printf("Child: %d", getpid());
        fflush(stdout);
        execvp(argv[1], &argv[1]); 
        exit(1);
    } else {
        wait(NULL);
    }

    return 0;
}