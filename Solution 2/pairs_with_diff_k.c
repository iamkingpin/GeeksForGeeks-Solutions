#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	int count=0;
	for(i=0;i<n;i++)
	{
	    for(j=n-1;j>=0;j--)
	    {
	        if(a[j]-a[i]==k)
	        {
	            count++;
	        }
	    }
	}
	printf("%d\n",count);
	}
	return 0;
}
