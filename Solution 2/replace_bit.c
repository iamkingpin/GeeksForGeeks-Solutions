#include <stdio.h>
#include<math.h>
int main()
{
    int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int a[20];
	    int i,j;
	    int sum=0;
	    for(i=0;n!=0;i++)
	    {
	        a[i]=n%2;
	        n=n/2;
	    }
	    a[i-k]=0;
	    for(j=0;j<i;j++)
	    {
	        sum+=a[j]*((int)pow(2,j));
	    }
	    printf("%d\n",sum);
	}
	return 0;
}
