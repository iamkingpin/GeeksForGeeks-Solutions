#include<stdio.h>
#include<string.h>
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
        int length=strlen(str);
        int start=0;
        int end=length-1;
        int flag=0;
        while(start<end)
        {
            if(str[start]!=str[end])
            {
                flag=1;
                break;
            }
            start++;
            end--;
        }
        if(flag==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}

