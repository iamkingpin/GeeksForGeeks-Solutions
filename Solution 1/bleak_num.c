#include<stdio.h>
int main()
{
     int t;
     scanf("%d",&t);
     while(t--)
     {
     int n;
     scanf("%d",&n);
     int flag=0;
     int count=0;
     int i,j;
     for(i=n;i>=0;i--)
     {
        count=0;
        j=i;
        while(j)
        {
           j=(j&(j-1));
           count++;
        }  
             if(n==(i+count))
               {
               flag=1;
               break;
               }
     } 
     
    if(flag==1)
    {
        printf("0\n");
    }
    else
     {
         printf("1\n");
     }
    }
    return 0;
}
