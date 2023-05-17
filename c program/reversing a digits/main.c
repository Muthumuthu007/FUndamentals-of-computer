#include<stdio.h>
int main()
{
    int n,i,temp,sum=0;
    printf("enter the number to reverse:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=n%10;
        sum=sum*10+temp;
        n=n/10;
    }
    printf("%d",sum);

}
