#include <stdio.h>

int main() {
	//code
	
	int n,i,s[100],e[100],in[100],j,t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
	scanf("%d",&e[i]);
	in[i]=i+1;
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(e[i]>e[j])
	        {
	            int temp=e[i];
	            e[i]=e[j];
	            e[j]=temp;
	            temp=in[i];
	            in[i]=in[j];
	            in[j]=temp;
	            temp=s[i];
	            s[i]=s[j];
	            s[j]=temp;
	            
	        }
	    }
	}
	printf("%d ",in[0]);
	int end=e[0];
	for(i=1;i<n;i++)
	{
	    if(end<s[i])
	    {
	        printf("%d ",in[i]);
	        end=e[i];
	    }
	}
	printf("\n");
	}
return 0;
}
