#include<stdio.h>
int main()
{
	//code
	int t;
	int i;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    if(n==0)
	    {
	        printf("%d\n",n);
	    }
	    else
	    {
	    int a[n];
	    int b[n];
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d", &a[i]);
	    }
        int max=1;
        for(i=0;i<n;i++)
        {
            b[i]=1;
        }
        for(i=0;i<n;i++)
        {
        for(j=0;j<i;j++)
        {
            if(a[j]<a[i] && b[i]<b[j]+1)
            {
                    b[i]=b[j]+1;
                    if(b[i]>max)
                    {
                        max=b[i];
                    }
            }
        }
        }
        printf("%d\n",max);
	    }
	}
	return 0;
}
