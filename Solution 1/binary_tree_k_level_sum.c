#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int k;
        scanf("%d",&k);
        char str[100];
        int level=-1;
        int count=0;
        scanf("%s",str);
        int i;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i] == '(')
            {
                level++;
            }
            else if(str[i] == ')')
            {
                level--;
            }
            else if(level==k) 
            {
                int sum=0;
                while(str[i] != '(')
                {
                        sum=(sum*10)+(str[i]-'0');
                        i++;
                }
                i--;
                count=count+sum;
            }
       }
       printf("%d\n",count);
}
}

