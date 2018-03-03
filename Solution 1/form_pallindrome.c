#include <stdio.h>
#include <string.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char str[45];
	    scanf("%s",str);
	    int length= strlen(str);
	    int i,j;
	    int a[50][50]={{0}};
	    int k;
	    for(k=1;k<length;k++)
	    {
	        for(i=0,j=k;i<length && j<length;i++,j++)
	        {
	            if(str[i] == str[j])
	            {
	                a[i][j] = a[i+1][j-1];
	            }
	            else
	            {
	                 a[i][j]=1+(a[i+1][j] < a[i][j-1] ? a[i+1][j]:a[i][j-1]);
	            }
	        }
	    }
	    printf("%d\n",a[0][length-1]);
	}
	return 0;
}
