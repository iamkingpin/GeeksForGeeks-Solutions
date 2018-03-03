#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int n;
	    scanf("%ld",&n);
	    int sum=0,i=0;
	    while(n!=0)
	    {
	        int rem=n%10;
	        n=n/10;
	        sum+=(rem*pow(2,i));
	        i++;
	    }
	    printf("%d\n",sum);
	}
	return 0;
}
