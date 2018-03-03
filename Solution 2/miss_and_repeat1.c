#include<stdio.h>
int main()
{
    int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    int missing,repeat=0;
	    scanf("%d",&n);
	    int a[n],b[n];
	    int i;
	     for(i=1;i<=n;i++)
	    {
	        b[i]=0;
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        b[a[i]]++;
	    }
	    for(i=1;i<=n;i++)
	    {
	        if(b[i]==0)
	        {
	            missing=i;
	        }
	        if(b[i]==2)
	        {
	            repeat=i;
	        }
	    }
	    printf("%d %d\n",repeat,missing);
	}
	
	return 0;
}
