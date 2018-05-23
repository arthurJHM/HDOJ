#include<stdio.h>
int main()
{
	__int64 s[45];
	int m,i;
	s[1]=3;
	s[2]=8;
	for(i=3;i<=44;i++)
	s[i]=2*(s[i-1]+s[i-2]);
	while(scanf("%d",&m)!=EOF){
		printf("%I64d\n",s[m]);
	}
	return 0;
 } 

这个题是递推解得    当第i个是o时  i-1个可以为e/f   2*a(i-2)    当第i个不是o时    可以是e/f  2*a[i-1]