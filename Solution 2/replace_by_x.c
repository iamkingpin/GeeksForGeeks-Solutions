#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[1001],str1[1001],result[1001];
        scanf("%s",str);
        scanf("%s",str1);
        int i=0;
        int l=0,k,j;
        while(str[i]!='\0')
        {
            k=i;
            for(j=0;str1[j]!='\0';j++)
            {
                if(str[k]==str1[j])
                {
                  k++;
                }
                else
                {
                    break;
                }
            }
            if(str1[j]=='\0')
            {
                if(result[l-1]!='X')
                {
                    result[l]='X';
                    l++;
                }
                i=k;
            }
            else
            {
               result[l]=str[i];
               i++;
               l++;
            }
        }
        result[l]='\0';
        printf("%s\n",result);
    }
    return 0;
}

