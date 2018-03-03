#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int k;
        scanf("%d",&k);
        int sum=0;
        for(i=0;i<k;i++)
        {
            sum+=a[i];
        }
        int x;
        int count;
        for(x=k;x<=n;x++)
        {
            for(i=0;i<n-x+1;i++)
            {
                count=0;
                for(j=i;j<i+x;j++)
                {
                  count+=a[j];
                }
                if(count>sum)
                {
                    sum=count;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

