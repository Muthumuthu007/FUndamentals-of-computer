#include<stdio.h>
int main()
{
    int firstnumber=-1,secondnumber=1,n,i,sum;
    printf("enter the limit to the number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=firstnumber+secondnumber;
        printf("%d",sum);
        firstnumber=secondnumber;
        secondnumber=sum;
    }
}
