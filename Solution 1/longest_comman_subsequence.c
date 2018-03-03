#include<stdio.h>
int main() 
{
	//code
     int t;
	 scanf("%d",&t);
	 while(t--)
	 {
	     int n,m,i,j;
	     char str1[102],str2[102];
	     scanf("%d%d",&m,&n);
	     int l[m+1][n+1];
	     scanf("%s %s",str1,str2);
	     for(i=0;i<=m;i++)
	      {
	          for(j=0;j<=n;j++)
	          {
	              if(i==0 || j==0)
	              {
	                   l[i][j]=0;
	              }
	              else if(str1[i-1]==str2[j-1])
	              {
	                  l[i][j]=1+l[i-1][j-1];
	              }
	              else
	              {
	                  if(l[i-1][j]>l[i][j-1])
	                  {
	                      l[i][j]=l[i-1][j];
	                  }
	                  else
	                  {
	                      l[i][j]=l[i][j-1];
	                  }
	              }
	          }
	      }
	    printf("%d\n",l[m][n]);
	 }
	return 0;
}
