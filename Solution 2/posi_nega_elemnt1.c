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
	    int b[n];
	    int k=0;
	    int i;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
    	for(i=0;i<n;i++)
         {
             if(a[i]>0 && k<=n)
                 {
                  b[k]=a[i];
                  k+=2;
            }
         }
        k=1;
        for(i=0;i<n;i++)
        {
        if(a[i]<0 && k<=n)
        {
            b[k]=a[i];
            k+=2;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
        printf("\n");
	}
	return 0;
}
