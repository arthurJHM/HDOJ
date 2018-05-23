#include<stdio.h>
int main()
{
	int i,j,k,n,m,a[100],average;
	a[1]=2;
	for (k=2;k<=100;k++)
	a[k]=a[k-1]+2;
    while(scanf("%d%d",&n,&m)!=EOF){
    	for (i=1;i<=n/m;i++){
    	average=(a[(i-1)*m+1]+a[i*m])/2;
    	printf((i*m==n)?"%d":"%d ",average);
		}

    	if (n%m)
    	printf("%d\n",(a[(i-1)*m+1]+a[(i-1)*m+n%m])/2);		
		else printf("\n");
	}
	return 0;
}