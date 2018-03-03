#include <stdio.h>
#include <stdlib.h>
long long count[101][101][101];
long long store[101][101][101];
int main() 
{
	//code
	int t;
    scanf("%d",&t);
    while(t--)
    {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    long long sum=0;
    count[0][0][0]=1;
    int i,j,k;
    for(i=0;i<=x;i++)
        {
            for(j=0;j<=y;j++)
            {
                for(k=0;k<=z;k++)
                {
                if(i!=0 || j!=0 || k!=0 )
                {
                    count[i][j][k]=0;
                }
                if(i>0)
                {
                    count[i][j][k]+=count[i-1][j][k];
                }
                if(j>0)
                {
                    count[i][j][k]+=count[i][j-1][k];
                }
                if(k>0)
                {
                    count[i][j][k]+=count[i][j][k-1];
                }
                count[i][j][k]%=1000000007;
                sum=0;
                if(i>0)
                {
                    sum+=store[i-1][j][k]*10 + 4*count[i-1][j][k];
                }
                if(j>0)
                {
                    sum+=store[i][j-1][k]*10 + 5*count[i][j-1][k];
                }
                if(k>0)
                {
                sum+=store[i][j][k-1]*10 + 6*count[i][j][k-1];    
                }
                store[i][j][k]=sum%1000000007;
                }
            }
        }
        sum=0;
        for(i=0;i<=x;i++)
        {
            for(j=0;j<=y;j++)
            {
                for(k=0;k<=z;k++)
                {
                sum=(sum+store[i][j][k])%1000000007;
                }
            }
        }
        printf("%lld\n",sum);
    }
	return 0;
}
