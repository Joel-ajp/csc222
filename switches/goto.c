#include <stdio.h>

int main() {
    int bankAmount = 0;

    printf("How much is in your bank? ");
    scanf("%d" , &bankAmount);

    if (bankAmount > 5000) {
        goto rich; // this jumps to the end block of rich
    }

    printf("You need to start saving more!\n");
    goto end;

rich:
    printf("YOu got alot of money! \n");
end:
    return 0;
// You could think of the rich and end just as labels, or line numbers, for other bits of code that are going to excecute
}
