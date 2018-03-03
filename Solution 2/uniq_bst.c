#include <stdio.h>
int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int res=1;
	    int i;
	    for(i=1;i<=n;i++)
	    {
	        res=(res*2*(2*i-1))/i;
	    }
	    printf("%d\n",res/i);
	}
	return 0;
}
