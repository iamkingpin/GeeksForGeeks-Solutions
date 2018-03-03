#include <stdio.h>
int main()
{
    //code
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        char str[27];
        int i=0,j;
        while(n!=0)
        {
            j=n%26;
            if(j==0)
            {
                str[i]='Z';
                n=n/26-1;
            }
            else
            {
                str[i]='A'+j-1;
                n/=26;
            }
            i++;
        }
        int length=i--;
        for(i=length-1;i>=0;i--)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }
	return 0;
}
