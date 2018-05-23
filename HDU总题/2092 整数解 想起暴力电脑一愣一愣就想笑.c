
就是数学解一下方程就行

#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m))
	{
		if(n==0&&m==0)break;
		double b=sqrt(n*n-4*m);
		if (b==(int)(b+0.000001))printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}




再贴一下暴力吧。。。
想起电脑缓了一秒才算出答案  我也是醉了。。
#include<stdio.h>
int main()
{
	int n,m;
	int i,j;
	while(scanf("%d%d",&n,&m))
	{
		int k=0;
		if(n==0&&m==0)break;
		for(i=-10000;i<=10000;i++)
			for(j=-10000;j<=10000;j++)
			{
				if(i*j==m&&i+j==n){
				k=1;break;}
			}
			if(~k)printf("No\n");
			else printf("Yes\n");
	}
	return 0;
}





后来其实发现这样用暴力真是太蠢太蠢了 还是下面的方法稍微正常一些

#include<stdio.h>
int main()
{
	int n,m;
	int i;
	while(scanf("%d%d",&n,&m))
	{
		int k=0;
		if(n==0&&m==0)break;
		for(i=-10000;i<=10000;i++)
				if(i*(n-i)==m)
				{
				k=1;
				break;
				}
			if(k==0)printf("No\n");
			else printf("Yes\n");
	}
	return 0;
}