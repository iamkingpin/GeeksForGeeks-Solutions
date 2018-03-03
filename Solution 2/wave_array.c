#include <stdio.h>
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j;
	int temp1,temp2;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	        temp1=a[i];
	        a[i]=a[j];
	        a[j]=temp1;
	        }
	    }
	}
	for(i=0;i<n-1;i++)
	{
	    temp2=a[i];
	    a[i]=a[i+1];
	    a[i+1]=temp2;
	    i++;
	}
	for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   printf("\n");
 }
return 0;
}
