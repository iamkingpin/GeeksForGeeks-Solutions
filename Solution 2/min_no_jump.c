#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int i;
	    int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		b[0]=0;
		int count=0;
		for(i=1;i<n;i++)
		{
			if(count+a[count]-i>=0)
			{
				b[i]=b[count]+1;
			}
			else if(count==i-1)
			{
				b[n-1]=-1;
				break;
			}
			else
			{
				count++;
				i--;
			}
		}
		printf("%d\n",b[n-1]);
	}
	return 0;
}
