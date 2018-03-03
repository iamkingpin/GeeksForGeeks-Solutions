#include <stdio.h>
#include<string.h>
int main()  
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[1000];
        scanf("%s",str);
        int length=strlen(str);
        int temp=length;
        int i,j;
        for(i=0;i<length;i++)
        {
            for(j=i+1;j<length;j++)
            {
                if(str[i]==str[j])
                {
                    if(j<temp)
                    {
                        temp=j;
                    }
                    
                }
            }
        }
    if(temp<length)
    {
        printf("%c\n",str[temp]);
    }
    else
    {
        printf("-1\n");
    }
    }
    return 0;
}
