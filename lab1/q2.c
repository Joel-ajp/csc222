/*
* Name(s): Joel Porter
* Date: 1.11.24
* Program Description: Minutes to hours and minutes converted
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Start here!
    const int minPerHour = 60;
    printf("Enter the number of minutes to convert: ");
    while (1) {
        int input;
        int hours;
        int minutes;
        scanf("%d", &input);
        if (input == 0 || input < 0) { printf("Done.\n"); return 0; }
        hours = input / minPerHour;
        minutes = input % minPerHour;
        printf("%d minutes = %d hours, %d minutes\n", input, hours, minutes);
        printf("Enter the next minute value (0 to quit): ");

    }

    return 0;
}