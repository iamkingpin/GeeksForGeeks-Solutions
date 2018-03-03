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
	    int count[100]={0};
	    int i;
	    int flag=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        count[a[i]]++;
	    }
	    for(i=0;i<n;i++)
	    {
	        if(count[a[i]]>n/2)
	        {
	         flag=1;
	         break;
	        }
	    }
	    if(flag==1)
	    {
	        printf("%d\n",a[i]);
	    }
	    else
	    {
	        printf("NO Majority Element\n");
	    }
	}
	return 0;
}
