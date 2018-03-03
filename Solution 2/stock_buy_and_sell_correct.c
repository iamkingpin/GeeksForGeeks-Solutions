#include<stdio.h>
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
  int n;
  scanf("%d",&n);
  int a[100];
  int i;
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  a[n]=0;
  int count=0;
  int count1=0;
  for(i=0;i<n;i++)
  {
      if(a[i]<a[i+1])
      {
      count++;
      count1++;
      }
      else if(a[i]>a[i+1] && count>0)
      {
      printf("(%d %d) ",i-count,i);
      count=0;
      }
  }
  if(count1==0)
  {
      printf("No Profit");
  }
  printf("\n");
  }
  return 0;
}

