// Write a C program to find sum of _n_ different numbers entered by the user.


 #include<stdio.h>
 int input()
 {
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    return n;
 }
 void input_array(int n,int a[n])
{
    for(int i=0;i<n;i++)
    {
    printf("Enter the %d arrays:\n",i+1);
    scanf("%d",&a[i]);
    }
}
int sum_array(int n, int a[n])
{
    int sum=0;
int i;
for(i =0;i<n;i++)
{
    sum=sum+a[i];
}
return sum;
}
void output(int n, int a[n],int sum)
{
 printf("\nSum of the entered numbers is: %d\n", sum);
}
int main()
{
    int n;
    n=input();
    int array[n];
    input_array(n,array);
    int sum=sum_array(n,array);
    output(n,array,sum);
    return 0;
}
