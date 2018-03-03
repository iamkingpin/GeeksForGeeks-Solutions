#include<stdio.h>
int main()
{
    int i,j,k,t,temp;
    scanf("%d",&t);
    int prime[1000005]={0};
        int max=1000000;
        for(i=2;i*i<=max;i++)
         {
         if(prime[i]==0)
         {
         for(j=i*2;j<=max;j=j+i)
         {
             prime[j]=1;
         }
         }
         }
    while(t--)
    {
        int a[10]={0};
        int l,r;
        scanf("%d%d",&l,&r);
        for(i=l;i<=r;i++)
        {
        if(prime[i]==0)
        {
         temp=i;
         while(temp>0)
         {
             a[temp%10]++;
             temp/=10;
         }
        }
        }
        int count=0,index;
        for(i=0;i<10;i++)
        {
        if(a[i]>=count && a[i]>0)
        {
         count=a[i];
         index=i;
        }
        }
        if(count==0)
        {
        printf("-1\n");
        }
        else
        {
        printf("%d\n",index);
        }
    }
    return 0;
}
