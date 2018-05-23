#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int father[101];
struct Road
{
	int a,b,cost;
}road[5050];
int cmp(Road a,Road b)
{
	return a.cost < b.cost;
}
int find(int x)
{
	if(x != father[x])
		return father[x] = find(father[x]);
		return x;
}
int merge(int x,int y)
{
	int a = find(x);
	int b = find(y);
	if( a != b)
	{
		father[a] = b;
		return 1;
	}
	return 0;
}


int main()
{
	int n,i,k,m,j,tem,ans;
	while(scanf("%d",&n)!= EOF)
	{
		k = 0;
		ans = 0;
		for (i = 1; i <= 100;i++)
		father[i] = i;
		memset(road,-1,sizeof(road));
		for(i = 1;i <= n;i++)
				for (j = 1;j <= n;j++)
				{
					scanf("%d",&tem);
					if(j - i > 0)
					{
					road[k].cost = tem;
					road[k].a = i;
					road[k++].b = j;	
					}
				}				
		sort(road,road+k,cmp);
		scanf("%d",&m);
		while(m--)
		{
			scanf("%d%d",&i,&j);
			merge(i,j);
		}
		m = 0;
		for( i = 0 ;i < k ;i++)
		{
			if(merge(road[i].a,road[i].b))
			{
				ans += road[i].cost;
				m++;
			}
			if( m == n)break;
		}
		printf("%d\n",ans);
	}
	return 0;	
}
