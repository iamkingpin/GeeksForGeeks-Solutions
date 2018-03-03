#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i;
	    scanf("%d",&n);
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&b[i]);
	    }
	    qsort(a,n,sizeof(int),compare);
	    qsort(b,n,sizeof(int),compare);
	    int j=0;
	    int max=1;
	    int count=1;
	    for(i=0;i<n;)
	    {
	        if(b[j]<=a[i+1])
	        {
	            count--;
            j++;	        
	        }
	        else
	        {
	        count++;
	        i++;
	        }
	        if(count>max)
	        {
	            max=count;
	        }
	    }
	    printf("%d\n",max);
	}
	return 0;
}
