#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int i;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int k;
	    scanf("%d",&k);
	    int j;
	    int b[k+1];
	    for(i=0;i<=k;i++)
	    {
	        b[i]=0;
	    }
	    b[0]=1;
	    for(i=0;i<n;i++)
		{
		    for(j=k;j>=a[i];j--)
		    {
		        b[j]+=b[j-a[i]];
		    }
		}
	    printf("%d\n",b[k]);
	}
	return 0;
}
