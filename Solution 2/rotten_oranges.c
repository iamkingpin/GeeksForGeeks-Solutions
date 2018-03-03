#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int r,c,i,j,ch=1,res=0,count=1;
		scanf("%d%d",&r,&c);
		int arr[r][c];
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		while(ch!=0)
		{
			res++;
			ch=0;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					if(arr[i][j]==2)
					{
						if(i+1<r && arr[i+1][j]==1)
						{
						arr[i+1][j]=3;
						ch++;
					    }
						if(j-1>=0 && arr[i][j-1]==1)
						{
						arr[i][j-1]=3;
						ch++;
					    }
						if(j+1<c && arr[i][j+1]==1)
						{
						arr[i][j+1]=3;
						ch++;
				    	}
						if(i-1 >=0 && arr[i-1][j]==1)
						{
						arr[i-1][j]=3;
						ch++;
				    	}
					}
				}
			}
			            for(i=0;i<r;i++)
			            {
			                for(j=0;j<c;j++)
			                {
			                     if(arr[i][j]==3)
			                     {
			                         arr[i][j]=2;
			                     }
			                }
			            }
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(arr[i][j]==1)
				{
					count=0;
				}
			}
		}
		if(count==0)
		{
		    printf("-1\n");
		}
		else
		{
		    printf("%d\n",res-1); 
		}
	}
	return 0;
}
