悲剧的我总之会忘记去初始化一些东西  这次就是忘了初始化  ans


#include<stdio.h>
int f[200010],sum[200010];
int ans = 0;
int n;
int find(int x)
{
	if (f[x] == x) return x;
		int t = f[x];
		f[x] = find(f[x]);
		sum[x] += sum[t];
		return f[x];
} 
int merge(int x,int y,int c)
{
	int a = find(x);
	int b = find(y);
	if (a == b)
	{
		if(sum[y] != sum[x] + c)
		ans++;
		return 0;
	}
	if(a > b)
	{
		sum[a] = sum[y]-sum[x] - c;
		f[a] = b;
	}
	else 
	{
		sum[b] = sum[x] - sum[y] + c;
		f[b] = a;
	}
	return 0;
}
void init()
{
	int i;
	ans = 0;
	for (i = 0 ;i <= n ;i++)
	{
		f[i] = i;
		sum[i] = 0;
	}	
}
int main()
{
	int m;
	int a,b,c;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
			init();
			while(m--)
	{
		scanf("%d%d%d",&a,&b,&c);
		merge(a - 1,b,c);
	}
	printf("%d\n",ans);
	}
	return 0;
}



这是第二遍打的  差不了多少的
#include<stdio.h>
int c,n,m,i,ans;
int father[200010],sum[200010];
int find(int x)
{
	if(x == father[x] )
	return x;
	int t = father[x];
	father[x] = find(father[x]);
	sum[x] += sum[t];
	return father[x];
}
int merge(int x,int y)
{
	int a = find(x);
	int b = find(y);
	if(a == b)
	{
		if(sum[x] != sum[y] - c)
		ans++;
		return 0;
	}
	if(a > b)
	{
		sum[a] = sum[y] - sum[x] - c;
		father[a] = b;
	}
	if(b > a)
	{
		sum[b] = sum[x] - sum[y] + c;
		father[b] = a;
	}
	return 0;
}
void init()
{
	ans = 0;
	for(i = 0;i <= n ;i++ )
	{
		sum[i] = 0;
		father[i] = i;
	}
}
int main()
{
	int a,b;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		init();
		while(m--)
		{
				scanf("%d%d%d",&a,&b,&c);
				merge(a-1,b);
		}
		printf("%d\n",ans);
	}
	return 0;
}


第三遍的修改  其实  根本就不需要  规定  从大到小  还是  从小到大  为  root
#include<stdio.h>
int c,n,m,i,ans;
int father[200010],sum[200010];
int find(int x)
{
	if(x == father[x] )
	return x;
	int t = father[x];
	father[x] = find(father[x]);
	sum[x] += sum[t];
	return father[x];
}
int merge(int x,int y)
{
	int a = find(x);
	int b = find(y);
	if(a == b)
	{
		if(sum[x] != sum[y] - c)
		ans++;
		return 0;
	}
//	if(a > b)
//	{
		sum[a] = sum[y] - sum[x] - c;
		father[a] = b;
//	}                                                                 就是这里  其实根本没有 要求严格
//	if(b > a)
//	{                                                                其实  仔细想一想  应该是 测试数据 太渣了  才可以 ac吧           这样不去指定 一个方向  还是很伤的吧         恩  应该就是这样没错          在更新的时候，数值小的一定是为根节点，
//		sum[b] = sum[x] - sum[y] + c;
//		father[b] = a;
//	}
	return 0;
}
void init()
{
	ans = 0;
	for(i = 0;i <= n ;i++ )
	{
		sum[i] = 0;
		father[i] = i;
	}
}
int main()
{
	int a,b;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		init();
		while(m--)
		{
				scanf("%d%d%d",&a,&b,&c);
				merge(a-1,b);
		}
		printf("%d\n",ans);
	}
	return 0;
}