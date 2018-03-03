#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x;
	    scanf("%d%d",&n,&x);
	    int a[n];
	    int i,j,k;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int flag=0;
	    for(i=0;i<n-2;i++)
	    {
	        for(j=i+1;j<n-1;j++)
	        {
	            for(k=j+1;k<n;k++)
	            {
	                if(a[i]+a[j]+a[k]==x)
	                {
	                    flag=1;
	                    break;
	                }
	            }
	        }
	    }
	    if(flag==1)
	    {
	        printf("1\n");
	    }
	    else
	    {
	        printf("0\n");
	    }
	}
	return 0;
}
