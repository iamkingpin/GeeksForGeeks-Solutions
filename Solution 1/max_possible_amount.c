#include <stdio.h>

int main() {
    
    int i,j,k,l,m,n,t, t1, t2;
    int v[600];
    int sum[600][600];
    int aux[600][600];
    
    scanf("%d", &t);
    for(m=0; m<t; m++) {
        scanf("%d", &n);
        
        for(i=0; i<n; i++) {
            scanf("%d", &v[i]);
        }
        
        for(i=0; i<n; i++) {
            sum[i][i] = v[i];
            aux[i][i] = v[i];
        }
        
        for(i=0; i<n; i++) {
            for(j=i+1; j<n; j++) {
                sum[i][j] = sum[i][j-1] + v[j];
            }
        }
        

        
        for(l=2; l<=n; l++) {
            for(i=0; i<=n-l; i++) {
                j = i + l - 1;
                
                t1 = sum[i][j] - aux[i+1][j];
                t2 = sum[i][j] - aux[i][j-1];
                
                if(t1 > t2) {
                    aux[i][j] = t1;
                } else {
                    aux[i][j] = t2;
                }
                
                // printf("%d %d %d %d %d", i, j, t1, t2, aux[i][j]);
                // printf("\n");
            }
        }
        printf("%d\n", aux[0][n-1]);
    }
}
