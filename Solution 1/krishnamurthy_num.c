#include<stdio.h>
int fact(int x)
{
	if(x==1 || x==0)
	{
		return 1;
	}
	else
	{
		return x*fact(x-1);
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,sum=0;
	scanf("%d",&n);
	int w=n;
	while(n!=0)
	{
	sum+=fact(n%10);
	n/=10;
		
	}
	if(sum==w)
	{
	    printf("YES\n");
	}
	else
	{
	    printf("NO\n");
	}
	}
	return 0;
	
}
