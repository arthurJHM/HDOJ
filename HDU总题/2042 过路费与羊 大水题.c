#include<stdio.h>
int main()
{
	int i,n,m,s[35];
	s[1]=4;
	for(i=2;i<=35;i++)
	s[i]=(s[i-1]-1)*2;
	scanf("%d",&m);
	while(m--){
		scanf("%d",&n);
		printf("%d\n",s[n]);
	}
	return 0;
}