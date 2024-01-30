//Write a C program to add two numbers using **pass by reference**

//void input(int *a, int *b);
//void add(int a, int b, int *sum);
//void output(int a, int b, int sum);

#include<stdio.h>
void input(int *a, int *b)
{
int n;
    printf("enter the number:\n");
    scanf("%d",&n);
}
void add(int a, int b, int *sum)
{
int *sum=a+b;
}
void output(int a, int b, int sum)
{
printf("the sum of two numbers %d+%d is %d\n",a,b,sum);
}
int main()
{
    int a,b,sum;
    input(&a,&b);
     add(a,b,&sum);
     output(a,b,sum);
     return 0;
}