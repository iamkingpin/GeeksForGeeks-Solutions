#include <stdio.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int x;
	    int sum=0;
	    int i;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&x);
	        sum+=x;
	    }
	   int temp=sum;
	   int flag;
	   while(1)
	    {
	       for(i=2;i<=sum/2;i++)
	       {
	             flag=0;
	            if(sum%i==0)
	                {
	                    flag=1;
	                    break;
	                }
	       }
	       if(flag==0)
	       {
	           printf("%d\n",sum-temp);
	           break;
	       }
	        sum ++;
	    }
	}
	return 0;
}
