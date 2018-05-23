#include<stdio.h>
__int64 s[31];
int n,m,i;
int main()
{
	s[1]=1;
	s[2]=3;
	for(i=3;i<=30;i++)
	s[i]=s[i-1]+2*s[i-2];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		printf("%I64d\n",s[m]);
	}
	return 0;
}