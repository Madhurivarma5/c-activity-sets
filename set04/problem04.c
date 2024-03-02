//Write a program to evaluate a polynomial at a given point using [Horner's Method](https://en.wikipedia.org/wiki/Horner%27s_method#:~:text=Alternatively%2C%20Horner's%20method%20also%20refers,into%20general%20use%20around%201970.)

#include <stdio.h>

// Function to input the degree of the polynomial
int input_degree() {
    int degree;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    return degree;
}

// Function to input coefficients of the polynomial
void input_coefficients(int n, float a[]) {
    printf("Enter the coefficients of the polynomial (from highest degree to constant term):\n");
    for (int i = n; i >= 0; i--) {
        printf("Coefficient for x^%d: ", i);
        scanf("%f", &a[i]);
    }
}

// Function to input the value of x
float input_x() {
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    return x;
}

// Function to evaluate the polynomial using Horner's Method
float evaluate_polynomial(int n, float a[], float x) {
    float result = a[0];
    for (int i = 1; i <= n; i++) {
        result = result * x + a[i];
    }
    return result;
}

// Function to output the result
void output(int n, float a[], float x, float result) {
    printf("The polynomial ");
    for (int i = n; i > 0; i--) {
        printf("%.2fx^%d + ", a[i], i);
    }
    printf("%.2f", a[0]);
    printf(" evaluated at x = %.2f is: %.2f\n", x, result);
}

int main() {
    int degree = input_degree();
    float coefficients[degree + 1];
    input_coefficients(degree, coefficients);
    float x = input_x();
    float result = evaluate_polynomial(degree, coefficients, x);
    output(degree, coefficients, x, result);

    return 0;
}
