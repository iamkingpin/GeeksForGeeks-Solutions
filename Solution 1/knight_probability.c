#include <stdio.h>
int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x,y,k;
	    scanf("%d %d %d %d",&n,&x,&y,&k);
	    
	    int xaxis[8]={1,2,-1,-2,1,2,-1,-2};
	    int yaxis[8]={2,1,2,1,-2,-1,-2,-1};
	    
	    float knight[n][n][k+1];
	    
	    int i,j,l,m;
	    int count=0;
	    
	    for(i=0;i<n;i++)
	    {
    	        for(j=0;j<n;j++)
    	        {
    	            knight[i][j][0]=1;
    	        }
    	}
    	  
    	  float prob;
    	  int dx,dy;
	      
	      for(l=1;l<=k;l++)
	      {
    	    for(i=0;i<n;i++)
    	    {
    	        for(j=0;j<n;j++)
    	        {
    	            prob=0;
    	            for(m=0;m<8;m++)
    	            {
    	                dx=i+xaxis[m];
    	                dy=j+yaxis[m];
    	                
    	                if(dx>=0 && dy>=0 && dx<n && dy<n) 
    	                {
    	                    
    	                    prob+=knight[dx][dy][l-1]/8;
    	                }
    	            }
    	            knight[i][j][l]=prob;
    	        }
    	    }
	    }
	    printf("%.6f\n",knight[x][y][k]);
	}
	return 0;
}
