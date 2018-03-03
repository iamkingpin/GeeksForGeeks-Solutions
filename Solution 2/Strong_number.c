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
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,sum=0;
	scanf("%d",&n);
	int temp=n;
	while(n!=0)
	{
	sum+=fact(n%10);
	n/=10;
	}
	if(temp==sum)
	{
	   printf("Strong\n"); 
	}
	else
	{
	    printf("Not Strong\n");
	}
	}	
	return 0;
}
