#include<stdio.h>
int main()
{
	int t;
        scanf("%d",&t);
        while(t--)
        {
            int n,x;
            scanf("%d%d",&n,&x);
            int a[n];
            int i,j,k;
            for(i=0;i<n;i++) 
            {
                scanf("%d",&a[i]);
            }
            int max=n+1;
            int sum,count;
            for(i=0;i<n;i++)
            {
                for(j=i;j<n;j++)
                {
                    sum=0;
                    count=0;
                    for(k=i;k<=j;k++)
                    {
                        sum+=a[k];
                        count++;
                    }
                    if(sum>x)
                    {
                        if(max>count)
                        {
                            max=count;
                        }
                    }
                }
            }
            printf("%d\n",max);
        }
        
	return 0;
}
