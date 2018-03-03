#include <stdio.h>
int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n],sum=0;
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        sum+=a[i];
	    }
	    if(sum%2==1)
	    {
	        printf("NO\n");
	    }
	    else
	    {
	        int m[sum+1];
	        m[0]=1;
	        for(i=1;i<=sum;i++)
	        m[i]=0;
	        for(i=0;i<n;i++)
	        {
	        for(j=sum-a[i];j>=0;j--)
	        {
	            if(m[j]==1)
	            {
	                m[j+a[i]]=1;
	            }
	        }
	    }

	    if(m[sum/2]==1)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	    }
	  }
	return 0;
}
