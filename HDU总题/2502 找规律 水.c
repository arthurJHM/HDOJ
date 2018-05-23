找规律咯  2*f(n-1)+2的n-2次方

#include<stdio.h>
int main()
{
	__int64 a[21],b[21];
	int i,n,m;
	a[0]=1;
	for(i=1;i<=20;i++)
	a[i]=2*a[i-1];
	b[1]=1;
	b[2]=3;
	for(i=3;i<=20;i++)
	b[i]=2*b[i-1]+a[i-2];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		printf("%I64d\n",b[m]);
	}
	return 0;
}