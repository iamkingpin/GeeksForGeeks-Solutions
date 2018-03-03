#include <stdio.h>
#include<limits.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,j,n,k,l,q;
	    scanf("%d",&n);
	    int p[n];
	    for(i=0;i<n;i++)
	    scanf("%d",&p[i]);
	    int m[n][n];
	    for(i=0;i<n;i++)
	    m[i][i]=0;
	    for(l=2;l<n;l++)
	    {
	        for(i=1;i<n-l+1;i++)
	        {
	            j=i+l-1;
	             m[i][j]=INT_MAX;
	            for(k=i;k<j;k++)
	            {
	                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
	                if(q<m[i][j])
	                m[i][j]=q;
	            }
	        }
	    }
	    printf("%d\n",m[1][n-1]);
	}
	return 0;
}
