#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int x;
	    int i;
	    int count=1;
	    for(i=2;count<n;i++)
	    {
	        x=i;
	        while(x%2==0)
	        {
	            x/=2;
	        }
	        while(x%3==0)
	        {
	            x/=3;
	        }
	        while(x%5==0)
	        {
	            x/=5;
	        }
	        if(x==1)
	        {
	            count++;
	        }
	    }
	    printf("%d\n",i-1);
	}
	return 0;
}
