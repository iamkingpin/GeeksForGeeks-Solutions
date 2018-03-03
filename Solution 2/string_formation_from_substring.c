#include<stdio.h>
#include<string.h>
int main()
{
	//code
        int t;
        scanf("%d",&t);
        while(t--)
        {
            char s[1001];
            scanf("%s",s);
            int n = strlen(s);
            int lcs[n],i=1,j=0,max=0;
            lcs[0]=0;
            while(i<n)
            {
                if(s[i] == s[j])
                {
                    lcs[i] = j+1;
                    j++;
                    i++;
                }
                else if(j>0)
                {
                    j = 0;
                }
                else
                {
                    lcs[i]=0;
                    i++;
                }
            }
            max = lcs[n-1];
            if(max>0 && n%(n-max) ==0)
                printf("True\n");
            else
                printf("False\n");
        }
	return 0;
}
