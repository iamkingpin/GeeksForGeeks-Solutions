#include <stdio.h>
int e[100][100],l[100][100];
int f(int n){
    for(int k=1;k<n;k++){
        for(int i=0;i+k<n;i++)
           if(l[i][i+k-1]+e[i+k][i+k]>l[i+1][i+k]+e[i][i])
               e[i][i+k]=l[i][i+k-1]+e[i+k][i+k],l[i][i+k]=e[i][i+k-1];
           else       
               e[i][i+k]=l[i+1][i+k]+e[i][i],l[i][i+k]=e[i+1][i+k];
    }
    return e[0][n-1];
}
int main() {
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        scanf("%d",&e[i][i]);
        printf("%d\n",f(n));
    }
	return 0;
}
