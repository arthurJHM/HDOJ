#include<stdio.h>
int main()
{
	int m,n,i,j,a[110];
	while(scanf("%d%d",&n,&m)){
		getchar();
		if(n==0&&m==0)break;
		for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		a[n+1]=m;
		for(i=n;i>0;i--)
		if(a[i+1]<a[i]){
			int t;
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;}
    for (i=1;i<=n+1;i++)
    printf(i==n+1?"%d\n":"%d ",a[i]);
	}
    return 0;
}