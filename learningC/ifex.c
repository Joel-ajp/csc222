#include <stdio.h>

int main() {
	int a;
	printf("Enter a num: ");
	scanf("%d", &a); 

	if (a > 5) {
		printf("A is greater than five\n");
	} else if (a == 5) {
		printf("A is equal to five\n");
	} else {
		printf("A is less than 5");
	}


	return 0;
}
