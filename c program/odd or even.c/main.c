#include<stdio.h>
int main()
{
    int n;
    printf("enter the positive number to check:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("the given number is even");
    }
    else
    {
        printf("the given number is odd");
    }
}
