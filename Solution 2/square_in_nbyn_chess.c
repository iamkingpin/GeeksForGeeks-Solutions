#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	     int n,i,sum=0;
	     scanf("%d",&n);
	     for(i=1;i<=n;i++)
	       sum+=i*i;
	     printf("%d\n",sum);
	}
	return 0;
}
// i=(n*(n+1)*(2*n+1))/6;
