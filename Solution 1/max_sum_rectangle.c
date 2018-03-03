#include <stdio.h>
#include<limits.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int m,n,i=0,j=0,l=0,r=0;
	    scanf("%d%d",&m,&n);
	    int a[m][n],kad[m],input[m*n],curSum=0,maxSum,sum=0;
	    for(;i<m*n;i++)
	    {
	        scanf("%d",&input[i]);
	    }
	    for(i=0;i<m;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            a[i][j]=input[l++];
	        }
	    }
	    for(l=0;l<n;l++)
	    {
	        for(i=0;i<m;i++)
	            kad[i]=0;
	        for(r=l;r<n;r++)
	        {
	            for(i=0;i<m;i++)
	            {
	                kad[i]=kad[i]+a[i][r];
	            }
	            sum=0;maxSum=INT_MIN;
	            
	            for(i=0;i<m;i++)
	            {
	                sum+=kad[i];
	                if(sum>maxSum)
	                    maxSum=sum;
	                if(sum<0)
	                    sum=0;
	            }
	            if(curSum<maxSum)
	                curSum=maxSum;
	        }
	    }
	    printf("%d\n",curSum);
	}
	return 0;
}
