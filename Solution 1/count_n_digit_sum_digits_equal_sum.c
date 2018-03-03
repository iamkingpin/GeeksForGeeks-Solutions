#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum;
        scanf("%d %d",&n,&sum);
        long int a[101][1001];
        int i,j,k;
        for(i=1;i<=sum;i++)
        {
            if(i<=9)
            {
                a[1][i]=1;
            }
            else
            {
                a[1][i]=0;
            }
        }
        for(i=2;i<=n;i++)
        {
            for(j=1;j<=sum;j++)
            {
                a[i][j]=0;
                for(k=0;k<10;k++)
                {
                    if(i==n)
                    {
                        if(j-k>0)
                        a[i][j] = a[i][j] + a[i-1][j-k];
                    }
                    else
                    {
                        if(j-k>=0)
                        a[i][j] = a[i][j] + a[i-1][j-k];
                    }
                    a[i][j] = a[i][j]%1000000007;
                }
            }
            
        }
        if(a[n][sum]>0)
        {
            printf("%ld\n",a[n][sum]);
        }
        else
        {
            printf("-1\n");
        }
    }
    
}
