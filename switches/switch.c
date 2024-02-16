#include <stdio.h>

int main() {
    int response;
    printf("Type in 1 or 2: ");
    scanf("%d" , &response); // every type except char requires a reference to that type

    switch (response) {
        case 1:
            printf("Hello world ");
        case 2:
            printf("Hello");
            break;
        default: 
            printf("Please put 1 or 2");
    }

    return 0;
}
 
