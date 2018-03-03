#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
	char str[1000];
	scanf("%s", str);
    int temp=0;
    int max=1;
    int count=0;
    int i,j;
    for(i=1;i<strlen(str);i++)
    {
        for(j=temp;j<i;j++)
        {
            if(str[i]==str[j])
            {
                 temp=j+1;
                 i=j+1;
                 if(max>count)
                 {
                     count=max;
                 }
                 max=0;
                 break;
            }
        }
        max++;
    }
    if(max>count)
    {
        count=max;
    }
    printf("%d\n",count);
	}
	return 0;
}
