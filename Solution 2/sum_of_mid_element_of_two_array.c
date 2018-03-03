#include <stdio.h>

int main() {
	//code
	int T,n,i,j,temp;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d",&n);
	    temp = 0;
	    int a[2*n],sum;
	    for(i=0;i<2*n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<2*n;i++)
	    {
	        for(j=i+1;j<2*n;j++)
	        {
	            if(a[i]>a[j])
	            {
	                temp = a[i];
	                a[i] = a[j];
	                a[j] = temp;
	            }
	        }
	    }
	    sum = a[n-1]+a[n];
	    printf("%d ",sum);
	    printf("\n");
	}
	return 0;
}
