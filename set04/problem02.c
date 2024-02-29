//2. Write a program to find the smallest of three fractions
#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction findSmallestFraction(Fraction frac1, Fraction frac2, Fraction frac3) {
    double value1 = (double)frac1.num / frac1.den;
    double value2 = (double)frac2.num / frac2.den;
    double value3 = (double)frac3.num / frac3.den;

    if (value1 <= value2 && value1 <= value3) {
        return frac1;
    } else if (value2 <= value1 && value2 <= value3) {
        return frac2;
    } else {
        return frac3;
    }
}

int main() {
    Fraction frac1, frac2, frac3;

    printf("Enter first fraction (numerator denominator): ");
    scanf("%d %d", &frac1.num, &frac1.den);

    printf("Enter second fraction (numerator denominator): ");
    scanf("%d %d", &frac2.num, &frac2.den);

    printf("Enter third fraction (numerator denominator): ");
    scanf("%d %d", &frac3.num, &frac3.den);

    Fraction smallestFraction = findSmallestFraction(frac1, frac2, frac3);

    printf("\nThe smallest fraction is: %d / %d\n", smallestFraction.num, smallestFraction.den);

    return 0;
}
