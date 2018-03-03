#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
    return (*(int *)a - *(int *)b);
}
int minimize(int a[],int n,int k){
    int result,i,s,l,t,add,sub;
    qsort(a,n,sizeof(int),cmp);
    result = a[n-1] - a[0];
    s = a[0] + k;
    l = a[n-1] - k;
    if (s > l){
        t = s;
        s = l;
        l = t;
    }
    for (i = 1; i < n-1; i++){
        add = a[i] + k;
        sub = a[i] - k;
        if (sub >= s || add <= l){
            continue;
        }
        if (l - sub <= add - s){
            s = sub;
        }
        else {
            l = add;
        }
    }
    if (l - s < result){
        result = l - s;
    }
    return result;
}
int main() {
	//code
	int t,k,n,result,i;
	scanf("%d", &t);
	while (t > 0){
	    t--;
	    scanf("%d%d",&k,&n);
	    int a[n];
	    for (i = 0; i < n; i++){
	        scanf("%d",&a[i]);
	    }
	    result = minimize(a,n,k);
	    printf("%d\n",result);
	}
	return 0;
}
