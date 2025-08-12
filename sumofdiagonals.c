#include <stdio.h>
int main(){
    int n;scanf("%d",&n);
    int a[n][n],i,j;for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);
    int s=0;for(i=0;i<n;i++)s+=a[i][i]+a[i][n-i-1];
    if(n%2)s-=a[n/2][n/2];
    printf("%d",s);
}
