#include <stdio.h>
#include <string.h> // allows us to maniputlate strings

struct Student {
	char name[100];
	float courseGrade;
};

int main() {
	// Struct followed by the struct name, then the variable name
	struct Student student1;
	strcpy(student1.name, "Zak");
	student1.courseGrade = 85.12312;

	printf("%s currently has the grade: %f\n", student1.name, student1.courseGrade);

	return 0;
}

