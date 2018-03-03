#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    char str1[n1];
    char str2[n2];
    scanf("%s %s",str1,str2);
    int i,j;
    int k=0;
    int count=0;
    int max=0;
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            while(str1[j+k] == str2[i+k] && (j+k)<n1 && (i+k)<n2)
            {
                count++;
                k++;
            }
            if(count >max)
            {
                max= count;
            }
            k=0;
            count=0;
        }
    }
    printf("%d\n",max);
}
return 0;
}

