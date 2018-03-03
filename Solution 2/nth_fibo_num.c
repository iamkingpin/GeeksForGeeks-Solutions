#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int i;
	    int first=0;
	    int second=1;
	    long long next;
	    for(i=0;i<=n;i++)
	    {
	        if(i<=1)
	        {
	            next=i;
	        }
	        else
	        {
	            next=first+second;
	            first=second;
	            second=next;
	        next%=1000000007;
	        first%=1000000007;
			second%=1000000007;
			
	        }
	    }
	    printf("%lld\n",next);
	}
	return 0;
}
