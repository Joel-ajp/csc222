/*
* Name(s): Joel Porter, Chase Dowdy, Memphis Delme
* Date: 1.18.24
* Program Description: q2 of the second lab; miles and gas conversion
*/

#include <stdio.h>

int main() {
    const float GALTOL = 3.785; const float MILETOKM = 1.609;
    float miles, gal;

    printf("Enter number of miles travelled: ");
    scanf("%f", &miles);

    printf("Enter number of gallons of gas used: ");
    scanf("%f", &gal);

    printf("Mile-per-gallon: %.2f\n", miles/gal);

    float mpg = miles / gal;

    float lPer100Km = 100 / (mpg * MILETOKM / GALTOL);

    printf("Liters-per-100-km: %.1f\n", lPer100Km);

    return 0;
}