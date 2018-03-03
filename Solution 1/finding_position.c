#include <stdio.h>
int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long n;
	    scanf("%lld",&n);
	    int sum=1;
	    while(sum<=n)
	    {
	        sum=sum*2;
	    }
	    printf("%lld\n",sum/2);
	}
	return 0;
}
