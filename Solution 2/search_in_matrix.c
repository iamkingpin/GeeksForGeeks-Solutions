#include <stdio.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int r,c;
	    scanf("%d%d",&r,&c);
	    int a[r][c];
	    int x;
	    int i,j;
	    for(i=0;i<r;i++)
	    {
	        for(j=0;j<c;j++)
	        {
	            scanf("%d",&a[i][j]);
	        }
	    }
	    scanf("%d",&x);
	    i=0;j=c-1;
	    while(i<r && j>=0)
	    {
	        if(a[i][j]<x)
	        {
	             i++;
	        }
	        else if(a[i][j]>x)
	        {
	            j--;
	        }
	        else if (a[i][j]==x)
	        {
	            break;
	        }
	    }
	    if(a[i][j]==x)
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
