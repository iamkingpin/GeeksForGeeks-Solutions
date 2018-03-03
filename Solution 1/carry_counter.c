#include <stdio.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n,m;
	    scanf("%lld %lld",&n,&m);
	    int carry=0,count=0;
	    while(n!=0||m!=0)
	    {
	        // we can also take int a1=n%10 ,int a2=n/10
	        // by taking modulus we are adding last digits of both numbers
	        carry=(n%10 + m%10 + carry)/10;
	        count+=carry;
	        n/=10;
	        m/=10;
	    }
	    printf("%d\n",count);
	}
	return 0;
}
