#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int sum1=0,sum2=0;
        int flag=0;
        scanf("%d",&n);
        int a[n];
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        if(n==1)
        {
             printf("YES\n");
        }
        else
        {
           for(i=0;i<n;i++)
           {
               sum2+=a[i];
           }
            for(i=0;i<n;i++)
            {
                if(i>0)
                {
                    sum1+=a[i-1];
                }
                if(i<n)
                {
                    sum2=sum2-a[i];
                }
                if(sum1==sum2)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
              {  
                   printf("NO\n");
              }
            else
                {
                    printf("YES\n");
                }
        }
        
    }
    return 0;
}



