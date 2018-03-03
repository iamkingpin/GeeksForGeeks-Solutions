#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        int count[n];
        count[0]=1;
        for(i=1;i<=n;i++)
        {
            count[i]=0;
            if(str[i-1]>'0')
             {
                 count[i]=count[i-1];
             }
            if(str[i-2]=='1'||(str[i-2]=='2') && str[i-1]<'7')
             {
                 count[i]+=count[i-2];
             }        
        }
        printf("%d\n",count[n]);
    }
    return 0;
}
    

