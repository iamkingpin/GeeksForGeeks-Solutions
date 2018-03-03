#include<stdio.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
		scanf("%d%d",&n,&m);
		char str1[110],str2[110],b[110][110];
		scanf("%s%s",str1,str2);
		int i,j;
		int min=0;
		for(i=0;i<=n;i++) 
		{
			for(j=0;j<=m;j++) 
			{
				if(i==0) 
				{
					b[i][j]=j;
				}
				else if(j==0) 
				{
					b[i][j]=i;
				}
				else if(str1[i-1]==str2[j-1]) 
				{
					b[i][j]=b[i-1][j-1];
				}
				else 
				{
				min=(b[i][j-1]+1)<(b[i-1][j]+1)?(b[i][j-1]+1):(b[i-1][j]+1);
				min=min<(b[i-1][j-1]+1)?min:(b[i-1][j-1]+1);
				b[i][j]=min;
				}				
			}
		}
		printf("%d\n",b[n][m]);
	}
	return 0;
}
