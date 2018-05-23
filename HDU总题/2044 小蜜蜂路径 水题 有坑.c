#include<stdio.h>
int main()
{
	int n,i;
	int a,b;
	__int64 s[50];
	s[1]=1;
	s[2]=2;
	for (i=3;i<=50;i++)
	s[i]=s[i-1]+s[i-2];
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		printf("%I64d\n",s[b-a]);
	}
	return 0;
}

注意到int会溢出