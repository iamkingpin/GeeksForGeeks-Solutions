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
	    int a[n];
	    int i,j;
	    int sum=0,product;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=n-1;i>=0;i--)
	    {
	      product=1; // product not 0 so 1
	      for(j=i;j>=0;j--)
	      {
	        product=product*a[j];
	        if(sum<product)
	        {
	          sum=product;
	        }
	      }
	  }
	  printf("%d\n",sum);
	}
	return 0;
}
