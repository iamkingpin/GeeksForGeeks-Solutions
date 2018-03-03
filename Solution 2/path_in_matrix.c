#include<stdio.h>
int main()
{
    //code
    int i,j,t,m[21][21],n,max;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                scanf("%d",&m[i][j]);
            }
        for(i=n-2; i>=0; i--)
            for(j=0; j<n; j++)
            {
                if(j==0)
                {
                    max=m[i+1][j]>m[i+1][j+1]?m[i+1][j]:m[i+1][j+1];
                }
                else if(j==n-1)
                {
                    max=m[i+1][j-1]>m[i+1][j]?m[i+1][j-1]:m[i+1][j];
                }
                else
                {
                    max=m[i+1][j]>m[i+1][j+1]?m[i+1][j]:m[i+1][j+1];
                    max=m[i+1][j-1]>max?m[i+1][j-1]:max;
                }
                m[i][j]+=max;
            }
        max=m[0][0];
        for(i=1; i<n; i++)
            max=m[0][i]>max?m[0][i]:max;
            printf("%d\n",max);
    }
    return 0;
}

