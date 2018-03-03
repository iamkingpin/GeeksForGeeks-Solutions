#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void print(int i,int j,int n,int** bracket,char *c)
{
    if(i==j)
    {
        printf("%c",(*c)++);
    }
    printf("(");
    print(i,bracket[i][j],n,bracket,c);
    print(bracket[i][j]+1,j,n,bracket,c);
    printf(")");
}

void matrixchain(int a[],int n)
{
    int dp[n][n],i,j,len,k,val;
    int **bracket=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++)
    bracket[i]=(int*)malloc(sizeof(int)*n);
    for(i=1;i<n;i++)dp[i][i]=0;
    for(len=2;len<n;len++)
    for(i=1;i<n-len+1;i++)
    {
        j=i+len-1;dp[i][j]=INT_MAX;
        for(k=i;k<j;k++)
      val=dp[i][k]+dp[k+1][j]+a[i-1]*a[k]*a[j];
      if(val<dp[i][j]){dp[i][j]=val;bracket[i][j]=k;}
    }
    char c='A';
    //print(1,n-1,n,bracket,&c);
}
int main() {
	int t;scanf("%d",&t);
	while(t--)
	{
	    int n;scanf("%d",&n);
	    int a[n],i;
	    for(i=0;i<n;i++)scanf("%d",&a[i]);
	    matrixchain(a,n);
	    printf("\n");
	}
	return 0;
}
