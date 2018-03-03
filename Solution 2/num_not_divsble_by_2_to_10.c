#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	long long int n;
	scanf("%lld",&n);
	long long int count=0;
    count=n/2+n/3+n/5+n/7-n/6-n/10-n/14-n/15-n/21-n/35+n/30+n/42+n/70+n/105-n/210; 
	printf("%lld\n",n-count);
	}
	return 0;
}
