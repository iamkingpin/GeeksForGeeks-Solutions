#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int q[100000];
        int i,low,high,x;
        printf("0 ");
        for(i=1;i<=9;++i)
        {
        	low=high=0;
        	q[high]=i;
        	while(low<=high)
        	{
        		printf("%d ",q[low]);
        		x=q[low]%10;
        		if(x>0 && 10*q[low]+(x-1)<=n) 
        		{
        		    q[++high]=10*q[low]+(x-1);
        		}
        		if(x<9 && 10*q[low]+(x+1)<=n) 
        		{
        		    q[++high]=10*q[low]+(x+1);
        		}
        		++low;
        	}
        }      
        printf("\n");
    }    
	return 0;
}
