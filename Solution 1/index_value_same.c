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
	    for(i=1;i<=n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int flag=0;
	    for(i=1;i<=n;i++)
	    {
	        if(a[i]==i)
	        {
	            printf("%d ",a[i]);
	            flag=1;
	        }
	    }
	    if(flag==0)
	    {
	        printf("Not Found\n");
	    }
	    else
	    {
	        printf("\n");
	    }
	}
	return 0;
}
