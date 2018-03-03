#include <stdio.h>
void valid(int a[], int low, int high, int *ans);
void pretopost(int a[], int low, int high);

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n],i;
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    int ans = 0;
	    valid(a,0,n-1, &ans);
	    if(ans == 0)
            pretopost(a,0,n-1);
	    else if(ans == 1 )
            printf("NO");
	    printf("\n");
	}
	return 0;
}

void valid(int a[], int low, int high, int *ans){
    int root = a[low],i;

    if(low<=high){
        for(i=low+1;i<=high;i++){
            if(a[i]>root)
                break;
        }
        int point = i;
        for(i=point ;i<=high;i++){
            if(a[i]<root){
                *ans = 1;
            }
        }
        {
            if(low == high){

            }
            else{
                if(*ans == 0)
                    valid(a,low+1,point-1,ans);
                if(*ans == 0)
                    valid(a,point,high,ans);

            }
        }
    }
}
void pretopost(int a[], int low, int high){
    
    int root = a[low],i;

    if(low<=high){
        for(i=low+1;i<=high;i++){
            if(a[i]>root)
                break;
        }
        int point = i;
        {
            if(low == high){
                    printf("%d ",root);
            }
            else{
                    pretopost(a,low+1,point-1);
                    pretopost(a,point,high);
                    printf("%d ",root);
            }
        }
    }
}

