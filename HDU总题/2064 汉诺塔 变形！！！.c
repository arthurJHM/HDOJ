#include<stdio.h>
int main()
{
	int n,i;
	__int64 s[40];
	s[1]=2;
	for(i=2;i<=35;i++)
	s[i]=3*s[i-1]+2;
	while(scanf("%d",&n)!=EOF){
		printf("%I64d\n",s[n]);
	}
	return 0;
} 

找规律  把n 个盘子从A 间接(不能把盘子直接从A 移到C )移到C 需要以下五步:
1. 把n - 1 个盘子间接从A 移到C,    f(n - 1)

2. 把最大的盘子从A 移到B,             1
3. 把n - 1 个盘子间接从C 移到A,    f(n - 1)
4. 把最大的盘子从B 移到C               1
5. 把n - 1 个盘子间接从A 移到C,    f(n - 1)
易得f(n) = 3 *　f(n - 1) + 2, f(1) = 2;