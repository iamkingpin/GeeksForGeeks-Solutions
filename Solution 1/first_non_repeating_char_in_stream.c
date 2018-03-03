#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    char c;
	    char str[501];
	    int a[26]={0};
	    int i=0,k,done=0;
	    while(n>0)
	    {
	        scanf(" %c ",&c);
	        a[c-97]++;
	        str[i]=c;
	        i++;
	        done=0;
	        for(k=0;k<i && done==0;k++)
	        {
	            if(a[str[k]-97]==1)
	            {
	                printf("%c ",str[k]);
	                done=1;
	            }
	        }
	        if(done==0)
	        {
	            printf("-1 ");
	        }
	        n--;
	    }
	    printf("\n");
	}
	return 0;
}
