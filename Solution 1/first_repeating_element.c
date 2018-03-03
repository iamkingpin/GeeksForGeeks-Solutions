#include <stdio.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int count=0;
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(a[i]==a[j])
	            {
	            	count=i+1;
	            	i=n;
	            	break;
	            }
	        }
	    }
	    if(count==0)
	    {
	        printf("-1\n");
	    }
	    else
	    {
	        printf("%d\n",count);
	    }
	}
	return 0;
}
