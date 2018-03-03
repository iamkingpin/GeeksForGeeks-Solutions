#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    if(n%8==0 || (n-2)%8==0)
	    {
	        printf("2\n");
	    }
	    else if((n-3)%4==0)
	    {
	        printf("3\n");
	    }
	    else if((n-1)%8==0)
	    {
	        printf("1\n");
	    }
	    else if((n-5)%8==0)
	    {
	        printf("5\n");
	    }
	    else if(n%2==0)
	    {
	        printf("4\n");
	    }
	}
	return 0;
}
