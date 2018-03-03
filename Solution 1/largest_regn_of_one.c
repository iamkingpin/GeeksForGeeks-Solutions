#include <stdio.h>
int n,m;
int b[50][50],a[50][50];

int visit(int i,int j)
{
    if(i<0||j<0||i>=n||j>=m||b[i][j]||!a[i][j])
    {
        return 0;
    }
    b[i][j]=1;
    return 1+visit(i+1,j)+visit(i-1,j)+visit(i,j+1)+visit(i,j-1)+visit(i-1,j-1)+visit(i-1,j+1)+visit(i+1,j-1)+visit(i+1,j+1);
}

int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--) 
	{ 
	    int i,j;
	    scanf("%d%d",&n,&m);
	    int max=0;
	    int tm;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	            {
	                scanf("%d",&a[i][j]);
	                b[i][j]=0;
	        
	            }
	    }
	    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
	         {
	            tm=visit(i,j);
	            if(tm>max)
	            {
	                max=tm;
	            }
	         }
        }
	    printf("%d\n",max);
	}
	return 0;
}
