#include<stdio.h>
int main()
{
	int m,a,b,i;
	__int64 s[25],c[25];
	c[0]=1;
	c[1]=1;
	for(i=2;i<=24;i++)
	c[i]=i*c[i-1];
	s[1]=0;
	s[2]=1;
	for(i=3;i<=24;i++)
	s[i]=(i-1)*(s[i-1]+s[i-2]);
	scanf("%d",&m);
	while(m--){
		scanf("%d%d",&a,&b);
			printf("%I64d\n",s[b]*(c[a]/(c[b]*c[a-b])));
	}
	return 0;
}


//�ܿӵ���  ���û�д���c[a-b]�����������  ���³������ 
//û�н�0�Ľ׳� ��ֵΪ1