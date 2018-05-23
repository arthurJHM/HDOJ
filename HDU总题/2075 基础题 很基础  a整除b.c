#include<stdio.h>
int main()
{
	int n;
	__int64 a,b;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%I64d%I64d",&a,&b);
		if(a%b)printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}