//Write a program find whether a number is a composite number
#include <stdio.h>
int input_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
int is_composite(int n) 
{
    if (n <= 1) {
        return 0;
    }

    int count_factors = 0;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            count_factors++;
        }
    }

    return count_factors > 2; 
}
void output(int n, int result)
 {
    if (result) {
        printf("%d is a composite number.\n", n);
    } else {
        printf("%d is not a composite number.\n", n);
    }
}
int main() {
    int number = input_number(); 
    int result = is_composite(number); 
    output(number, result); 

    return 0;
}
