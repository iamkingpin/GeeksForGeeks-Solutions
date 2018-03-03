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
	    for(i=0;i<=n;i++)
	    {
	        a[i]=0;
	    }
	   a[0]=1;
	   for(i=3;i<=n;i++)
	   {
	       a[i]+=a[i-3];
	   }
	   for(i=5;i<=n;i++)
	   {
	       a[i]+=a[i-5];
	   }
	   for(i=10;i<=n;i++)
	  {
	       a[i]+=a[i-10];
	  }
	   printf("%d\n",a[n]);
	}
	return 0;
}
