#include<stdio.h>
#include<math.h>
int main()
{
	int t, n, i;
	scanf("%d", &t);
	while(t--){
	    double a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3;
	    scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf", &a1, &b1, &c1, &d1, &a2, &b2, &c2, &d2, &a3, &b3, &c3, &d3 );
        double D, D1, D2, D3;
        int x, y, z;
        D = a1*(b2*c3-b3*c2) - b1*(a2*c3-c2*a3) + c1*(a2*b3-b2*a3);
        D1 = d1*(b2*c3-b3*c2) - b1*(d2*c3-c2*d3) + c1*(d2*b3-b2*d3);
        D2 = a1*(d2*c3-d3*c2) - d1*(a2*c3-c2*a3) + c1*(a2*d3-d2*a3);
        D3 = a1*(b2*d3-b3*d2) - b1*(a2*d3-d2*a3) + d1*(a2*b3-b2*a3);
        if((D == 0)&&((D1 == 0)&&(D2 == 0)&&(D3 == 0)))
            printf("1\n");
        else if(D == 0)
            printf("0\n");
        else {
            x = floor(D1/D);
            y = floor(D2/D);
            z = floor(D3/D);
        
            printf("%d %d %d\n", x, y, z);
        }
	}
	return 0;
}
