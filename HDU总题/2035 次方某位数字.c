#include<stdio.h>
int main()
{
	int n,m,a;
	int i;
	while(scanf("%d%d",&n,&m),n,m){
		a=n;
		for(i=1;i<m;i++)
		{
			a*=n;
			a%=1000;
		}
		printf("%d\n",a);
	}
	return 0;
}