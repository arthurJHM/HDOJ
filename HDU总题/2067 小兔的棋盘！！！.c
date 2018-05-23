http://www.cppblog.com/MiYu/archive/2010/08/07/122569.html

http://www.cnblogs.com/buptLizer/archive/2011/10/23/2222027.html
一定要看看 啊！！！
发现越来越多东西不懂了 
ACM 太能装逼了

#include<stdio.h>
int main()
{
	int n,i,j;
	int flage=0;
	__int64 s[40][40];
	for(i=0;i<=35;i++)
	s[0][i]=1;
	for(j=1;j<=35;j++)
	for(i=1;i<=35;i++)
	{
		if(i==j)s[i][j]=s[i-1][j];
		if(i!=j)s[i][j]=s[i-1][j]+s[i][j-1];
	}
	while(scanf("%d",&n)&&n!=-1){flage++;
		printf("%d %d %I64d\n",flage,n,2*s[n][n]);
	}
	return 0;
}