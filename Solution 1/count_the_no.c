#include<stdio.h>
int main()
{
    int i,rem,n,t,count;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            rem=i;
            while(rem!=0)
            {
               if(rem%10>5 ||rem%10==0)
               {
                   count++;
                   break;
               }
               rem/=10;
           }
        }
        printf("%d\n",n-count);
    }
    return 0;
}
