#include <stdio.h>
int a[11][11];
int path(int k, int n,int sum, int i, int j)
{
    if(i>=n || j>=n)
    {
        return 0;
    }
    sum+=a[i][j];
    if(i==n-1 && j==n-1 && sum==k)
    {
        return 1;
    }
    else if((i==n-1 && j==n-1 && sum!=k) || (i!=n-1 && j!=n-1 && sum>k))
    {
        return 0;
    }
    return path(k,n,sum,i+1,j)+path(k,n,sum,i,j+1);
}

int main()
{
	//code
	int t,n,k,i,j,result;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&k,&n);
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            scanf("%d",&a[i][j]);
	        }
	    }
	    result=path(k,n,0,0,0);
	    printf("%d\n",result);
	}
	return 0;
}
