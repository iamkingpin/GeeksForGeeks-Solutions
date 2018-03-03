#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    int a[n];
	    int i,j;
	    for(i=0; i<n; i++) 
	    {
	        scanf("%d", &a[i]);
	    }
	    int temp;
	    int k=-1;
	    for(i=n-2;i>=0 && k<0;i--) 
	    {
	       for(j=n-1;j>i;j--) 
	       {
	           if(a[j] > a[i]) 
	           {
	               temp = a[j];
	               a[j] = a[i];
	               a[i] = temp;
	               k = i;
	               break;
	           }
	       }
	    }
	    
	    for(i=0; i<=k; i++) 
	    {
	        printf("%d ", a[i]);
	    }
	    for(i=n-1; i>k; i--) 
	    {
	        printf("%d ", a[i]);
	    }
	    printf("\n");
	}
}
