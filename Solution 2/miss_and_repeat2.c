#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i;
	    scanf("%d",&n);
	    int a[n];
	    int b[100]={0};
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        b[a[i]]++;
	    }
	    for(i=1;i<=n;i++)
	    {
	        if(b[i]>1)
	        {
	            printf("%d ",i);
	        }
	    }
	    for(i=1;i<=n;i++)
	    {
	        if(b[i]==0)
	        {
	            printf("%d\n",i);
	        }
	    }
	}
	return 0;
}
