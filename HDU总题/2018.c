#include<stdio.h>
int main()
{
	int m,a[55],i;
	a[1]=1;
	a[2]=2;
	a[3]=3;
	a[4]=4;
		for (i=5;i<=55;i++)
		a[i]=a[i-1]+a[i-3];	
		while(scanf("%d",&m)&&m)
		printf("%d\n",a[m]);
		return 0;
}