#include <stdio.h>

int main() {
	//code
	int t,n,i,j;
	int a[1000];
	int maxAr = 0;
	
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    maxAr = 0;
	    for(i=0;i<n;i++)
	    {
	        int count = 1;
	        for(j=i+1;j<n;j++)
	        {
	            if(a[j]<a[i])
	            {
	                break;
	            }
	            count++;
	        }
	        for(j=i-1;j>=0;j--)
	        {
	            if(a[j]<a[i])
	            {
	                break;
	            }
	            count++;
	        }
	        if(count*a[i] > maxAr)
	        {
	            maxAr = count*a[i];
	        }
	        //printf("%d %d\n", a[i], maxAr);
	    }
	    printf("%d\n",maxAr);
	}
	return 0;
}
