本题还是坑在 对于 char 和 int 的理解上  还有 对于scanf("%c",&a);   会吸收 换行符和空格的 认识没有到位

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


还有剩余的一个疑问  就是对a 进行如下操作时的会导致错误产生的不理解   a=(a-96)*-1+b;  第一个测试对 第二个就不行了





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


觉得还是将a 改为char 比较好