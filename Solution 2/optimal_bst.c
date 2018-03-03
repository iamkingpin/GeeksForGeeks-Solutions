#include <stdio.h>
#include <limits.h>
int sum(int freq[], int i, int j)
{
    int k;
    int sum=0;
    for(k=i; k<=j; k++)
    {
        sum=sum+freq[k];
    }
    return sum;
}
int main() {
	int t;
	scanf("%d", &t);
	int a;
	for(a=0; a<t; a++)
	{
	    int n, i;
	    int keys[100];
	    int freq[100];
	    scanf("%d", &n);
	    for(i=0; i<n; i++)
	    scanf("%d", &keys[i]);
	    
	    for(i=0; i<n; i++)
	    scanf("%d", &freq[i]);
	    
	    int matrix[n][n];
	    for(i=0; i<n; i++)
	    {
	        matrix[i][i]=freq[i];
	    }
	    int l, r, c, j;
	    for(l=2; l<=n; l++)
	    {
	        for(i=0; i<=n-l+1; i++)
	        {
	            j=i+l-1;
	            matrix[i][j]=INT_MAX;
	            
	            for(r=i; r<=j; r++)
	            {
	                int c=((r>i)?matrix[i][r-1]:0)+((r<j)?matrix[r+1][j]:0)+sum(freq, i, j);
	                if(c<matrix[i][j])
	                matrix[i][j]=c;
	            }
	        }
	    }
	    printf("%d\n", matrix[0][n-1]);
	    
	}
	return 0;
}
