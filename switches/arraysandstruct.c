#include <stdio.h>

struct exStruct {
    int testInt;
    float testFloat;
};

union exUnion {
    int testInt;
    float testFloat;
};

int main() {
    struct exStruct ExS;
    ExS.testInt = 5;
    ExS.testFloat = 123.456; // calling test int here should refer to a seperate value

    printf("test int exs = %d\n", ExS.testInt);
    printf("test float exs = %f\n", ExS.testFloat);

    union exUnion ExU;
    ExU.testInt = 5;
    ExU.testFloat = 123.456; /// calling test int should try and call an int but the value is now replaced with test floats value 

    printf("\ntest int exU = %d\n", ExU.testInt); // thinking it should return 5, but does it? 
    printf("test float exU = %f\n", ExU.testFloat);

    return 0;

}
