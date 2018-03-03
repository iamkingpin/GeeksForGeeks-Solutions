#include <stdio.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int m;
	    scanf("%d",&m);
	    int i=0;
	    int j=1;
	    int count=0;
	    int base=10;
	    while(i+j<=m)
	    {
	        i+=j;
	        count++;
	        if(count==base-1)
	        {
	            j++; 
	            base*=10;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}
