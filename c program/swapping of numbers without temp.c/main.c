#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("\nbefore the swap");
    printf("\nthe value of a: %d",a);
    printf("\nthe value of b: %d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter the swap");
    printf("\nthe value of a: %d",a);
    printf("\nthe value of b: %d",b);
}

