#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d %d",&n,&m);
	    int a[n][m],i,j,count,max,index;
	    for(i=0,max=0;i<n;i++)
	    {
	    for(j=0,count=0;j<m;j++)
	    {
	    scanf("%d",&a[i][j]);
	    if(a[i][j]==1)
	    count++;
	    }
	    if(max<count)
	    {
	        max=count;
	        index=i;
	    }
	    }
	    printf("%d\n",index);
	}
	return 0;
}
