#include <stdio.h>
int n,m,sx,sy,dx,dy;
int a[25][25];
int v[25][25];

void print()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            {
                printf("%d ",a[i][j]);
            }
        printf("\n");
    }
}

int range(int i,int j)
{
    if(i<0||i>=n)
     {
          return 0;
     }
    if(j<0||j>=m)
     {
         return 0;
     }
    return 1;
}
void bfs(int i,int j,int count)
{
    if(range(i,j)==1)
    {
        if(count>=a[i][j])
        {
            return ;
        }
        else
        {
            if(v[i][j]==0)
            {
                v[i][j]=1;
                a[i][j]=count;
                bfs(i+2,j+1,count+1);
                bfs(i+2,j-1,count+1);
                bfs(i-2,j+1,count+1);
                bfs(i-2,j-1,count+1);
                bfs(i+1,j+2,count+1);
                bfs(i+1,j-2,count+1);
                bfs(i-1,j+2,count+1);
                bfs(i-1,j-2,count+1);
                v[i][j]=0;
            }
            return ;
        }
    }
    return;
}

int main()
{
    int t;
    scanf("%d",&t);
    int i,j;
    while(t--)
    {
        scanf("%d %d",&n,&m);
        scanf("%d %d",&sx,&sy);
        scanf("%d %d",&dx,&dy);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
            {
                a[i][j]=n*m;
                v[i][j]=0;
            }
        bfs(sx-1,sy-1,0);
        if(a[dx-1][dy-1]==n*m)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",a[dx-1][dy-1]);
        }
    }
    return 0;
}

