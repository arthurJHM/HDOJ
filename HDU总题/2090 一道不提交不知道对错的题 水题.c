//��ʵctrl+z  ���� enter������



#include<stdio.h>
int main()
{
	double sum,n,price;
	char s[100];
	sum=0.0;
	while(scanf("%s",s)!=EOF)
	{
		scanf("%lf%lf",&n,&price);
		sum+=n*price;
	}
	printf("%.1lf\n",sum);
	return 0;
}