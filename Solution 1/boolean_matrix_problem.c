#include<stdio.h>
#include<stdbool.h>

void boolMatrix(int r, int c, int mat[][c])
{
    int i,j;
    bool row[r], col[c];
    
    for(i=0;i<r;i++)
    {
        row[i]=0;
    }
    
    for(j=0;j<c;j++)
    {
        col[j]=0;
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(mat[i][j]==1)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(row[i]==1 || col[j]==1)
            {
                mat[i][j]=1;
            }
        }
    }
}

void printMatrix(int r, int c, int mat[][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ", mat[i][j]);
        }
    }
    printf("\n");
}
int main()
{
	//code
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int M, N;
	    scanf("%d %d", &M, &N);
	    int i, j, mat[M][N];
	    for(i=0;i<M;i++)
	    {
	        for(j=0;j<N;j++)
	        {
	            scanf("%d", &mat[i][j]);
	        }
	    }
	    boolMatrix(M,N,mat);
	    printMatrix(M,N,mat);
	}
	return 0;
}
