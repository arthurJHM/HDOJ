���⻹�ǿ��� ���� char �� int �������  ���� ����scanf("%c",&a);   ������ ���з��Ϳո�� ��ʶû�е�λ

#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		scanf("%c",&a);
		getchar();
		scanf("%d",&b);
		getchar();
		if(a>='A'&&a<='Z')
			printf("%d\n",a-'A'+1+b);
	    if(a>='a'&&a<='z')
		printf("%d\n",(a-96)*-1+b);
	}
	return 0;
 } 


����ʣ���һ������  ���Ƕ�a �������²���ʱ�Ļᵼ�´�������Ĳ����   a=(a-96)*-1+b;  ��һ�����Զ� �ڶ����Ͳ�����





 #include<stdio.h>
int main()
{
	char a;
	int n,b;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		scanf("%c",&a);
		getchar();
		scanf("%d",&b);
		getchar();
		if(a>='A'&&a<='Z')
			printf("%d\n",a-'A'+1+b);
	    if(a>='a'&&a<='z')
		printf("%d\n",(a-96)*-1+b);
	}
	return 0;
 } 


���û��ǽ�a ��Ϊchar �ȽϺ�