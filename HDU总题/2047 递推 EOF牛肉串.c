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

������ǵ��ƽ��    ����i����oʱ  i-1������Ϊe/f   2*a(i-2)    ����i������oʱ    ������e/f  2*a[i-1]