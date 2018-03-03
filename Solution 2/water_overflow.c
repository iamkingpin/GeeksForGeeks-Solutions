#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int q,w,e;
		scanf("%d",&q);
		scanf("%d",&w);
		scanf("%d",&e);
		float a[100][100]={0},rem;
		a[1][1]=q;
		int i,j;
		for(i=1;i<50;i++)
		{
			for(j=1;j<=i;j++)
			{
				rem=0;
				if(a[i][j]>1)
				{
					rem=a[i][j]-1;
					a[i][j]=1;
				}
				if(rem>0)
				{
					a[i+1][j]+=rem/2;
					a[i+1][j+1]+=rem/2;
				}
			}
		}
		printf("%f\n",a[w][e]);
	}
}
