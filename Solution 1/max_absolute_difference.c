#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,i,j,sum1,sum2,sum3,max,k;
	scanf("%d",&t);
	while(t-->0)
	{
		max=-1;
		scanf("%d",&n);
		int *arr=(int *)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		int *sum=(int *)malloc(n*sizeof(int));
		sum[0]=arr[0];
		for(i=1;i<n;i++)
		sum[i]=sum[i-1]+arr[i];
		for(i=0;i<n;i++)
		{
			for(k=0;k<=i;k++)
			{
				sum1=sum[i]-sum[k];
				for(j=i+1;j<n;j++)
				{
					//sum1=sum[i];
					sum2=sum[j]-sum[i];
					sum3=sum2-sum1;
					sum3=(sum3>0)?sum3:-sum3;
					if(sum3>max)
					max=sum3;
				}
				for(j=i+1;j<n;j++)
				{
					sum1=sum[i];
					sum2=sum[j]-sum[i];
					sum3=sum2-sum1;
					sum3=(sum3>0)?sum3:-sum3;
					if(sum3>max)
					max=sum3;
				}
			}
		}
		printf("%d\n",max);
	}
	return 0;
}
