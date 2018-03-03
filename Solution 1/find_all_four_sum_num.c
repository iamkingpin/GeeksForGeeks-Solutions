#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

void find(int *arr, int n, int sum)
{
	int i,j,k,temp,sim,flag=0;
	int res[4];
	int *count = (int*) calloc(202, sizeof(int));
	qsort((void*)arr, n, sizeof(int), comp);
	for (i=0; i<n; i++) count[arr[i]+100]++;
	for (i=0; i<n; i++)
	{
		if (i>0 && arr[i]==arr[i-1]) continue;
		for (j=i+1; j<n; j++)
		{
			if (j>i+1 && arr[j]==arr[j-1]) continue;
			for (k=j+1; k<n; k++)
			{
				if (k>j+1 && arr[k]==arr[k-1]) continue;
				temp = sum-arr[i]-arr[j]-arr[k];
				if(temp>=-100 && temp <=100 && count[temp+100]>0 && temp>=arr[k])
				{
					sim=1;
					if (temp==arr[i]) sim++;
					if (temp==arr[j]) sim++;
					if (temp==arr[k]) sim++;
					if (sim) if(count[temp+100] < sim) continue;
					if (res[0]==arr[i]&&res[1]==arr[j]&&res[2]==arr[k]&&res[3]==temp)
						continue;
					res[0]=arr[i];
					res[1]=arr[j];
					res[2]=arr[k];
					res[3]=temp;
					printf("%d %d %d %d $",res[0],res[1],res[2],res[3]);
					flag=1;
				}
			}
		}
	}
	if(!flag) printf("-1");
	printf("\n");
	free(count);
	free(arr);
}

int main()
{
	int t,i,*n,**arr,c,*k;
	scanf("%d",&t);
	arr = (int**) calloc(t, sizeof(int*));
	n = (int*) calloc(t, sizeof(int));
	k = (int*) calloc(t, sizeof(int));
	for (c=0; c<t; c++)
	{
		scanf("%d%d",n+c,k+c);	
		arr[c] = (int*) calloc(n[c], sizeof(int));
		for (i=0; i<n[c]; i++)
			scanf("%d",&arr[c][i]);
	}
	for (i=0; i<t; i++) find(arr[i], n[i], k[i]);
	free(n);
	free(k);
	return 0;
}
