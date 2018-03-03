#include <stdio.h>
int main() 
{
    //code
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int t[n+1][k+1];
        int max=0,min=50;
        int i,j,x;
        for(i=0;i<=n;i++)
        {
            t[i][0]=0;
            t[i][1]=1;
        }
        for(i=0;i<=k;i++)
        {
            t[0][i]=0;
            t[1][i]=i;
        }
        
        for(i=2;i<=n;i++)
        {
            for(j=2;j<=k;j++)
            {
                min=50;
                for(x=1;x<=j;x++)
                {
                    if(t[i-1][x-1]>t[i][j-x])
                    {
                        max=1+t[i-1][x-1];
                    }
                    else
                    {
                        max=1+t[i][j-x];
                    }
                    if(max<min)
                    {
                     min=max;   
                    }
                }
                t[i][j]=min;
            }
        }
        printf("%d\n",t[n][k]);
    }
	
	return 0;
}
