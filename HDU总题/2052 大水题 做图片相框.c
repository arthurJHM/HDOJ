#include<stdio.h>
int main()
{
	int a,b,i,j;
	while(scanf("%d%d",&a,&b)!=EOF){
			printf("+");
			for(j=1;j<=a;j++)
			printf("-");
			printf("+\n");
			for(i=1;i<=b;i++)
			{
				printf("|");
				for(j=1;j<=a;j++)
				printf(" ");
				printf("|\n");
			}
			printf("+");
			for(j=1;j<=a;j++)
			printf("-");
			printf("+\n\n");
		}
		return 0;
	}


�ӵ�����  ��Ŀ��Ҫ�� ÿ�����Ӻ���Ҫ��һ�� blank line