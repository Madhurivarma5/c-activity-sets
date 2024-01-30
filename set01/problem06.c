//Write a C program to compare three numbers using **pass by reference**
//int input(int *a, int *b, int *c);
//void compare(int a, int b, int c, int *largest);
//void output(int a, int b, int c, int largest);

#include <stdio.h>
int input()
{
    int n;
    printf("enter the numbers:");
    scanf("%d",&n);
    return n;
}
void compare(int a,int b,int c,int *largest)
{
    if(a>b && a>c)
    { 
        *largest=a;
    }
    else if(b>a && b>c)
    {
        *largest=b;
    } 
    else
    {
    *largest=c;
}
 
}
void output(int a,int b, int c,int largest)
{
    printf("the largest of %d,%d and %d is %d",a,b,c,largest);
}
int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}
