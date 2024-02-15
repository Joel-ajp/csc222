/*
* Name(s): Joel Porter, Chase Dowdy, Memphis Dalme
* Date: 1.18.24
* Program Description: q1 of the second lab; devowel a string
*/

#include <stdio.h>

int isVowel(char c) {
	char vowels[] = {'a', 'e', 'i', 'o', 'u'};
	int numVowels = sizeof(vowels) / sizeof(vowels[0]);

	for(int i = 0; i < numVowels; i++) {
		if (c == vowels[i]) {
			return 1;
		}
	}
	return 0;
}

void removeVowels(char *input, char *output) {
	int i, j = 0;

	for (i = 0; input[i] != '\0'; i++) {
		if(!isVowel(input[i])) {
		output[j] = input[i];
		j++;
		}
	}
	output[j] = '\0';
}

int main() {
	char input[80], output[80];

	printf("Enter a string: ");
	fgets(input, sizeof(input), stdin);

	removeVowels(input, output);

	printf("%s\n", output);

	return 0;
}
