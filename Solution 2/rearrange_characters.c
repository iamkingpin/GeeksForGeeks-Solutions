
#include <stdio.h>
#include<string.h>

int main() 
{
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        char str[600];
        scanf("%s ",str);
        int n,i;
        n=strlen(str);
        int sttr[26];
        for(i=0;i<26;i++)
        {
            sttr[i]=0;
        }
        int max=0;
        for(i=0;i<n;i++)
        {
            sttr[str[i]-'a']++;

        }
        for(i=0;i<26;i++)
        {
            if(sttr[i]>max)
                max=sttr[i];
        }
        if(max>(n/2))
            printf("0 \n");
        else 
            printf("1 \n");
        
        
    }
	return 0;
}
