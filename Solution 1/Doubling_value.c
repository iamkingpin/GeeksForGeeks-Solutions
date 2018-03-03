#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	long long int n,b;
	scanf("%lld%lld",&n,&b);
	long long int a[n];
	int i;
	for(i=0;i<n;i++)
	{
	    scanf("%lld",&a[i]);
	    if(a[i]==b)
	    {
	        b=2*a[i];
	    }
	}
	printf("%lld\n",b);
	}
	return 0;
}
