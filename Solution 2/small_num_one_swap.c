#include<stdio.h>
#include<string.h>
int main()
{  
 int t;
 scanf("%d",&t);
while(t--)
{
 char str[100];
 scanf("%s",str);
 int length=strlen(str);
 int first=-1,second=-1;
 int min1=0,min2=1;
 int flag=0,i;
for(i=1;i<length;i++)
{
    if(str[i]>='1'&&flag==0)
    {
        flag=1;
        min2=i;
        
    }
    if(str[i]<=str[min1] && str[i]!='0')
    {
        min1=i;
        
    }
   if(str[i]<=str[min2] && flag==1)
    {
        min2=i;
        
    }
}
if(min1!=0 && str[min1]<str[0])
{
  char temp=str[min1];
  str[min1]=str[0];
  str[0]=temp;
}
else
{
    for(i=1;i<length;i++)
    {
        if(str[i]!='0' && str[i]>str[min2] && min2>i)
        {
          char temp=str[min2];
          str[min2]=str[i];
          str[i]=temp;
          break;
        }
    }
}
printf("%s\n",str);
}
return 0;
}
