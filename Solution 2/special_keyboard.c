#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int s[200];
	    int i,j;
	    int max;
	    for(i=0;i<7;i++)
	    {
	        s[i]=i;
	    }
	    for(i=7;i<=n;i++)
	    {
	        max=0;
	        for(j=1;j<=i-3;j++)
	        {
	            
	            if(s[j]*(i-j-1)>max)
	            {
	                max=s[j]*(i-j-1);
	            }
	        }
	        s[i]=max;
	    }
	    printf("%d\n",s[n]);
	}
	return 0;
}
