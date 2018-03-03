#include <stdio.h>
#include<math.h>
int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,k;
	    scanf("%d%d%d",&a,&b,&k);
	    int i;
	    long int sum=1,rem=1;
	    for(i=0;i<b;i++)
	    {
	          sum*=a;
	    }
	   for(i=1;i<k;i++)
	   {
	       rem*=10;
	   }
	    sum/=rem;
	    printf("%ld\n",sum%10);
	}
	return 0;
}
