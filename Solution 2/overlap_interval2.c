#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n],b[n],i,temp,flag,k,j;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a[i],&b[i]);
		}
		flag=1;
		for(i=0;i<n && flag==1;i++)
		{
			flag=0;
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					
					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
					
					flag=1;
				}
			}
		}
		for(i=0;i<n-1;i++)
		{
			if(b[i]>=a[i+1])
			{
				if(a[i+1]>a[i])
				{
					a[i+1]=a[i];
				}
				if(b[i+1]<b[i])
				{
					b[i+1]=b[i];
				}
				a[i]=-1;
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>=0)
			{
			    printf("%d %d ",a[i],b[i]);
			}
		}
		printf("\n");
	}
}
