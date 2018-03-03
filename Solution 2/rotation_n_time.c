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
	int i;
	int count=0;
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
	    if(a[i-1]>a[i])
	     {
	    count=i;
	      }
	}
	printf("%d\n",count);
	}
	return 0;
}
