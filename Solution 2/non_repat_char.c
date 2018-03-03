#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    char str[n];
	    scanf("%s",str);
	    int i,j;
	    int count;
	    for(i=0;i<n;i++)
	    {
	        count=0;
	        for(j=0;j<n;j++)
	        {
            if(i!=j && str[i]==str[j])
               {
	                count=1;
	                break;
	           }
	        }
	        
	        if(count==0)
	        {
	            printf("%c\n",str[i]);
	            break;
	        }
	        
	    }
	    
	    if(count==1)
	     {
	          printf("-1\n");
	     }
	 
	}
	return 0;
}
