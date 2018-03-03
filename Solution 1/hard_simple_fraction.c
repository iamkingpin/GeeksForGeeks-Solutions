#include <stdio.h>

int main() {
	//code
	int t,n,d,r,c[10],l,ans[10],rem[10],k;
	scanf("%d",&t);
	while(t--) {
	    scanf("%d%d",&n,&d);
	    for(r=0;r<d;r++)c[r]=0;
	    k=0;
	    printf("%d",n/d);
	    r=n%d;
	    if(r) {
	        printf(".");
	        l=0;
	        n=0;
	        while(r) {
	            if(c[r])
	                break;
	            c[r]=1;
	            rem[l]=r;
	            ans[l++]=r*10/d;
	            r=r*10%d;
	        }
	        for(n=0;n<l;n++){if(rem[n]==r){printf("(");k=1;}printf("%d",ans[n]);}
	        if(k)printf(")");
	    }
	    printf("\n");
	}
	return 0;
}
