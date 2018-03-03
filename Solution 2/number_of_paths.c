#include <stdio.h>

int main() {
	
	int t,m,n,i,j;
	
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&m,&n);
	    
	    int a[m][n];
	    for(i=0;i<m;i++)
	    {
	        a[i][0]=1;    
	    }
	    
	    for(j=0;j<n;j++)
	    {
	        a[0][j]=1;
	    }
	    
	    for(i=1;i<m;i++)
	    {
	        for(j=1;j<n;j++)
	            a[i][j]=a[i-1][j]+a[i][j-1];
	    }
	    
	    printf("%d\n",a[m-1][n-1]);
	}
	return 0;
}
