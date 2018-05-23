#include<stdio.h>
int main()
{
	__int64 g[34],d[34];
	int i,n,m;
	d[0]=0;
	d[1]=1;	
	g[0]=1;
	g[1]=3;
	for(i=2;i<=33;i++)
	{
	d[i]=d[i-1]+g[i-1];
	g[i]=g[i-1]*3+2*d[i-1];
	}
	while(scanf("%d",&n)&&n!=-1)
	{
		printf("%I64d, %I64d\n",g[n],d[n]);
	}
	return 0;
}

//其实就是找规律的