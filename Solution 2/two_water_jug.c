#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int m,n,d;
    scanf("%d%d%d",&m,&n,&d);
    int max=1,count=0;
    int a=0;
    int b=0;
    if(m==d || n==d)
    {
        printf("1\n");
        continue;
    }
    while(a<m && b<n && max==1)
    {
        b=n;
        count++;
        while(b>0)
        {
            while(a<m && b>0)
            {
                 b--;
                 a++;
            }
            count++;
            if(b==d || m-a==d || n-b==d)
            {
            max=0;
            break;
            }
            if(b>0)
            {
            a=0;
            count++;
            }
        }
    }
    if(max==1)
    {
        printf("-1\n");
    }
    else
    {
         printf("%d\n", count);
    }
  }

  return 0;
}

