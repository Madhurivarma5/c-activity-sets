//Write a program to find the `nCr` of given n and r

// ***Function Declarations***
// void input_n_and_r(int *n, int *r);
// int nCr(int n, int r);
// void output(int n, int r, int result);

#include <stdio.h>
void input_n_and_r(int *n, int *r)
{
    printf("Enter the value of n:");
    scanf("%d",n);
     printf("Enter the value of r:");
    scanf("%d",r);
}
int nCr(int n, int r)
{
    if(r==0||r==n){
        return 1;
    }else {
        return nCr(n-1,r-1)+nCr(n-1,r);
    }
    }
    void output(int n, int r, int result) {
    printf("The combination (nCr) of %d and %d is: %d\n", n, r, result);
}
int main() {
    int n, r, result;
    input_n_and_r(&n, &r);
    result = nCr(n, r);
    output(n, r, result);
    return 0;
}