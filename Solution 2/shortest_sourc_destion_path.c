#include <stdio.h>
int min;
int check[20][20];
void visit(int a[][20],int m,int n,int x,int y,int i,int j,int sum)
{
    if(check[i][j]==1)
    {
        return;
    }
    if(i==x && j==y)
    {
        if(sum<min)
        {
            min=sum;
        }
        return;
    }
    check[i][j]=1;
    if(j+1<m && a[i][j+1]==1)
    {
        visit(a,m,n,x,y,i,j+1,sum+1);
    }
    if(j-1>=0 && a[i][j-1]==1)
    {
        visit(a,m,n,x,y,i,j-1,sum+1);
    }
    if(i+1<n && a[i+1][j]==1)
    {
        visit(a,m,n,x,y,i+1,j,sum+1);
    }
    if(i-1>=0 && a[i-1][j]==1)
    {
        visit(a,m,n,x,y,i-1,j,sum+1);
    }
    check[i][j]=0;
}
int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d %d",&n,&m);
	    int a[20][20];
	    int i,j;
	    int x,y;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            scanf("%d",&a[i][j]);
	            check[i][j]=0;
	        }
	    }
	    scanf("%d %d",&x,&y);
	    min=m*n;
	    if(a[0][0]==1)
	    {
	        visit(a,m,n,x,y,0,0,0);
	    }
	    if(min<m*n)
	    {
	        printf("%d\n",min);
	    }
	    else
	    {
	        printf("-1\n");
	    }
	}
	return 0;
}
