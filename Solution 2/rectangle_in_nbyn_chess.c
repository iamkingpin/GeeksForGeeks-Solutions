#include <stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   long long int n;
	    scanf("%lld",&n);
	    printf("%lld\n",(n*(n+1)*(n-1)*(3*n+2)/12));
	}
	return 0;
}
