#include<stdio.h>
int main()
{
    int temp,a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("\nbefore the swap");
    printf("\nthe value of a: %d",a);
    printf("\nthe value of b: %d",b);

    temp=a;
    a=b;
    b=temp;
    printf("\nafter the swap");
    printf("\nthe value of a: %d",a);
    printf("\nthe value of b: %d",b);

}
