#include <stdio.h>

int main() {
	//code
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int p=1,ans=0;
	    while(n)
	    {
	        p=p*5;
	        if(n&1)
	            ans+=p;
	       n>>=1;
	    }
	    printf("%d\n",ans);
	}
	return 0;
}
