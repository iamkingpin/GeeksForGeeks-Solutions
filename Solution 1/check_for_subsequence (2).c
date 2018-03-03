#include <stdio.h>
#include<string.h>
int main() 
{
int t;
scanf("%d",&t);
while(t--)
{
    char str1[1000],str2[1000];
    scanf("%s %s",str1,str2);
    int n1=strlen(str1);
    int n2=strlen(str2);
    int i,j;
    int count=0;
    for(i=0;i<n1;i++)
    {
    for(j=i;j<n2;j++)
    {
        if(str1[i]==str2[j])
        {
            count++;
            break;
        }
    }
    }
  if(count==n1)
  {
      printf("1\n");
  }
 else
 {
     printf("0\n");
 }
}
return 0;
}
