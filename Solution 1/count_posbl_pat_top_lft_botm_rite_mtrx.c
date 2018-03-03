#include <stdio.h>
#define mod 1000000007
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d%d",&n,&m);
	    int a[n][m];
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	           if(i==0 || j==0)
	               {
	                   a[i][j]=1;
	               }
	           else
	               {
	                   a[i][j]=(a[i-1][j]+a[i][j-1])%mod;
	               }
	        }
	    }
	 
	    printf("%d\n",a[n-1][m-1]);
	}
	return 0;
}
