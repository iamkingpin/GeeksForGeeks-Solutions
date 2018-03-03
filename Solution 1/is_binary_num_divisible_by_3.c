#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int t;
	scanf("%d",&t);
	char c[100];
	while(t--)
	{
	    scanf("%s",&c);
	    //int i=0;
	    //while(c[i]=='0')
	    //i++;
	    int l=strlen(c);
	    int odd=0;
	    int even=0;
	    int j;
	    for( j=0;j<l;j++)
	    {
	        if(c[j]=='1')
	        {
	            if(j%2==0)
	            odd++;
	            else
	            even++;
	        }

	    }
	    int diff=odd-even;
	    if(diff%3==0)
	    printf("1\n");
	    else
	    printf("0\n");
	}
	return 0;
}

