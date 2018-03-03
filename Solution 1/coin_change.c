#include <stdio.h>
int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x;
	    scanf("%d",&n);
	    int a[n];
	    int b[300]={0};
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	       
	    }
	    scanf("%d",&x);
	     b[0]=1;
	    for(i=0;i<n;i++)
	    {
	        for(j=a[i];j<=x;j++)
	        {
	            b[j]+=b[j-a[i]];
	        }
	    }
	    printf("%d\n",b[x]);
	    
	}
	return 0;
}
