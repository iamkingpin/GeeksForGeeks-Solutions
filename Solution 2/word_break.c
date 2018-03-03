#include <stdio.h>
#include<string.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    char a[n][15];
	    char b[1000];
	    int i,j,k;
	    int count=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%s",a[i]);
	    }
	    scanf("%s",b);
	    int length = strlen(b);
	    for(i=0;i<length;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            if(b[i]==a[j][0])
	            {
	                count=0;
	                int length1 = strlen(a[j]);
	                for(k=0;k<length1;k++)
	                {
	                    if(b[i+k]==a[j][k])
	                        {
	                            count++;
	                        }
	                }
	                if(count==length1)
	                {
	                    i = i+length1-1;
	                    break;
	                }
	            }
	        }
	        if(j==n)
            {
                printf("0\n");
                break;
            }
	    }
        if(i==length)
        {
            printf("1\n");
        }
	}
	return 0;
}

