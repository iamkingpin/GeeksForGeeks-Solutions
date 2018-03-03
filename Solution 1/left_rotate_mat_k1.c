#include <stdio.h>
int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,m,k;    
	scanf("%d %d %d",&n,&m,&k);
	int a[n][m];
	int i,j;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}
	for(i=0;i<n;i++)
	{
	    for(j=k;j<m;j++)
	    {
	        printf("%d ",a[i][j]);
	    }
	    for(j=0;j<k;j++)
	    {
	        printf("%d ",a[i][j]);
	    }
	}
	printf("\n");
	}
	return 0;
}
