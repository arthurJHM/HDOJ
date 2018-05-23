#include<stdio.h>
int main()
{
	__int64 s[55];
	int n,i;
	s[0] = 0;
	s[1] = 1;
	for(i = 2;i <= 50;i++)
	s[i] = s[i-1] + s[i-2];
	scanf("%d",&n);
	{
		printf("%I64d\n",s[n]);
	}
	return 0;
}