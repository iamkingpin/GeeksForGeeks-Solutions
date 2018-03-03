#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
   int t;
	scanf("%d",&t);
	while(t--)
	{
        char a[100000];
        scanf("%s",a);
        int l=strlen(a);
        int i;
        for(i=0;i<l;i++)
            {
            if(i==0&&a[i]>=65&&a[i]<=90)
                  printf("%c",a[i]+32);
           else if(a[i]>=65&&a[i]<=90)
                printf(" %c",a[i]+32);
            else
                printf("%c",a[i]);
        }
	   printf("\n");
    }
    return 0;
}

