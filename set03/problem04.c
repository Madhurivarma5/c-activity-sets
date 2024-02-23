// Write a program to find nth number in fibonacci sequence.
#include <stdio.h>
int input() {
    int num;
    printf("Enter the value of n: ");
    scanf("%d", &num);
    return num;
}
int find_fibo(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0, b = 1, next;

    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    return b;
}

void output(int n, int fibo) {
    printf("The %dth number in the Fibonacci sequence is: %d\n", n, fibo);
}

int main() {
    int num = input(); 
    int fibonacciNumber = find_fibo(num); 
    output(num, fibonacciNumber); 
    return 0;
}
