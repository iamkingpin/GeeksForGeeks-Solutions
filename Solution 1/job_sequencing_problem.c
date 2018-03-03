#include<stdio.h>
int main()
{
	int i,j,k,temp,n,t,count,sum,arr1[100],arr2[100],arr[100],brr[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		count=0;
		sum=0;
		scanf("%d",&n);
		for(j=0;j<100;j++)
		{
			brr[j]=0;
		}
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[j]);
			scanf("%d",&arr1[j]);
			scanf("%d",&arr2[j]);
		}
		for(j=0;j<n-1;j++)
		{
			for(k=0;k<n-j-1;k++)
			{
				if(arr2[k]<arr2[k+1])
				{
					temp=arr2[k];
					arr2[k]=arr2[k+1];
					arr2[k+1]=temp;
					temp=arr1[k];
					arr1[k]=arr1[k+1];
					arr1[k+1]=temp;
				}
			}
		}
		for(j=0;j<n;j++)
		{
			k=arr1[j];
			while(brr[k-1]!=0 && k>0)
			{
				k--;
			}
			if(k>0)
			{
			brr[k-1]=arr2[j];
			sum=sum+arr2[j];
			count++;
		   }  
		   else if (k==0 && brr[k]==0)
		   {
		   	brr[k]=arr2[j];
		   	sum=sum+arr2[j];
		   	count++;
		   }
			}
			printf("%d %d\n",count,sum);
				
	}
}
