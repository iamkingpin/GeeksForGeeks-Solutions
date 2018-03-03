#include <stdio.h>
#include<string.h>
int n;
void solve(int cur,char str[][11],int vis[]){
    int i,j,k;
    int flag=0;
    int x=strlen(str[cur]);
    for(i=0;i<n;i++)
    {
        if(vis[i]==0&&i!=cur&&str[cur][x-1]==str[i][0])
        {
            flag=1;
            vis[i]=1;
            solve(i,str,vis);
        }
    }
    if(flag==0)
        return;

}

int main() {
    int t,m;
    scanf("%d",&t);
    for(m=0;m<t;m++){
	int i,j;
	scanf("%d",&n);
	char str[n][11];
	int vis[n];
	for(i=0;i<n;i++)
	{    scanf("%s",str[i]);
	    vis[i]=0;}
	    if(n>1){
	solve(0,str,vis);
	int flag=0;
	for(i=0;i<n;i++)
	{
	    if(vis[i]!=1)
	        flag=1;
	}
	if(flag==1)
	    printf("0\n");
	 else printf("1\n");}
        else if(n==1)
            {
             int y=strlen(str[0]);
             if(str[0][0]==str[0][y-1])
                printf("1\n");
            else printf("0\n");
            }
    }
	return 0;
}
