#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int i;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int left;
	    int right;
	    int temp;
	    scanf("%d%d",&left,&right);
	    left=left-1; ///left=left-1 or left-- coz starting from i=0;
	    right=right-1; ///
	    for(i=0;i<n;i++)
	    {
	        while(left<right)
	        {
	            temp=a[left];
	            a[left]=a[right];
	            a[right]=temp;
	            left++;
	            right--;
	        }
	        printf("%d ",a[i]);
	    }
	    printf("\n");
	}
	return 0;
}
