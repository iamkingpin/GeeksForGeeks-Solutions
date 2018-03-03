#include <stdio.h>

int min(int a,int b,int c)
{
    int min;
    
    if(a>=b)
    min=b;
    else min=a;
    
    if(min>=c) min=c;
    
    return min;
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,j,max=0;
        scanf("%d%d",&n,&m);
        int mat[n][m],temp[n][m];
        
        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%d",&mat[i][j]);
        
        for(i=0;i<n;i++)
        temp[i][0]=mat[i][0];
        for(i=0;i<m;i++)
        temp[0][i]=mat[0][i];
        
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                if(mat[i][j]==1)
                temp[i][j]=1 + min(temp[i-1][j],temp[i-1][j-1],temp[i][j-1]);
                
                else
                temp[i][j]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            if(temp[i][j]>max)
            max=temp[i][j];
        }
        printf("%d\n",max);
        
    }
	//code
	return 0;
}
