#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x1,y1,x2,y2;
	    int x3,y3,x4,y4;
	    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	    scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
	    if(x2>=x3 && x1<=x4 && y1>=y4 && y2<=y3)
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
