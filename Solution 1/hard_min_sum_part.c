#include <stdio.h>
int mod(int x)
{
    if(x>=0)
    return x;
    else
    return x-2*x;
}

int main() {
	//code
	int T,A[100],t=-1000,n,i,j;
	long int left[100],right[100],min,s;
	scanf("%d",&T);
	while(T--)
	{
	    s=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++){
	    scanf("%d",&A[i]);
	    s=s+A[i];
	    }
	    int B[(s/2)+2];
	    for(i=0;i<=(s/2)+1;i++)
	    B[i]=0;
	    B[0]=1;
	    for(i=0;i<n;i++)
	    {
	        for(j=(s/2)+1;j>=0;j--)
	        {
	            if(B[j]==1){
	                if(j+A[i]<(s/2)+1)
	                B[j+A[i]]=1;
	            }
	        }
	    }
	    for(j=(s/2)+1;j>=0;j--)
	    {
	        if(B[j]==1)
	        break;
	    }
	    printf("%d\n",mod((s-j)-j));
	    
	}
	return 0;
}
