#include <stdio.h>
int main()
{
    int i,n,j,l,s;
    printf("enter the number of rows:");
    scanf("%d",&n);
  
    for(i=-n;i<=n;i++)
    {
        if(i<0)
        l=-i;
        else
        
            l=i;
        

        
            for(j=0;j<2*n-l+1;j++)
            {
                if(j<l)
                
                    printf("  ");
                
                else
                    
        
                printf("* ");
            }
            
        
        
        printf("\n");
        }
    
    
}
    

