#include<stdio.h>

void fill(int row, int col, char mat[][col], int x, int y)
{
    if (x >= row || x < 0)
      return;
    
    if (y >= col || y < 0)
      return;
      
    char prec = mat[x][y];
    mat[x][y] = 'O';
    
    if (y-1 >= 0 && mat[x][y-1] == prec)
      fill(row, col, mat, x, y-1);
    
    if (y+1 < col && mat[x][y+1] == prec)
      fill(row, col, mat, x, y+1);
    
    if (x-1 >= 0 && mat[x-1][y] == prec)
      fill(row, col, mat, x-1, y);
    
    if (x+1 < row && mat[x+1][y] == prec)
      fill(row, col, mat, x+1, y);
}

int main()
{
    int tst;
    scanf("%d", &tst);
    while(tst--)
    {
        int r, c;
        scanf("%d",&r);
        scanf("%d",&c);
        char mat[r][c];
        int i, j;
    
        for(i = 0; i<r; i++)
           for(j = 0; j<c; j++)
              scanf(" %c",&mat[i][j]);
    
    
        for(i = 0; i<r; i++)
           for(j = 0; j<c; j++)
             if(mat[i][j] == 'O')
               mat[i][j] = '*'; 
        
        for (i = 0; i<c; i++)
           if (mat[0][i] == '*')
             fill(r, c, mat, 0, i);
        
        for (i = 0; i<r; i++)
           if (mat[i][c-1] == '*')
             fill(r, c, mat, i, c-1);
             
        for (i = 0; i<c; i++)
           if (mat[r-1][i] == '*')
             fill(r, c, mat, r-1, i);
        
        for (i = 0; i<r; i++)
           if (mat[i][0] == '*')
             fill(r, c, mat, i, 0);
        
        for(i = 0; i<r; i++)
           for(j = 0; j<c; j++)
             if(mat[i][j] == '*')
               mat[i][j] = 'X';
               
        for(i = 0; i<r; i++)
           for(j = 0; j<c; j++)
            printf("%c ",mat[i][j]);
        
        printf("\n");
    }
	return 0;
}
