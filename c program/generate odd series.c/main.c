#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the limit to print a odd number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(i%2!=0)
      {
          printf("%d",i);
      }
    }
}

