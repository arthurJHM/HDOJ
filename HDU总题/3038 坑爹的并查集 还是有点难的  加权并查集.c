���������֮������ȥ��ʼ��һЩ����  ��ξ������˳�ʼ��  ans


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



���ǵڶ�����  ��˶��ٵ�
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


��������޸�  ��ʵ  �����Ͳ���Ҫ  �涨  �Ӵ�С  ����  ��С����  Ϊ  root
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
//	}                                                                 ��������  ��ʵ����û�� Ҫ���ϸ�
//	if(b > a)
//	{                                                                ��ʵ  ��ϸ��һ��  Ӧ���� �������� ̫����  �ſ��� ac��           ������ȥָ�� һ������  ���Ǻ��˵İ�         ��  Ӧ�þ�������û��          �ڸ��µ�ʱ����ֵС��һ����Ϊ���ڵ㣬
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