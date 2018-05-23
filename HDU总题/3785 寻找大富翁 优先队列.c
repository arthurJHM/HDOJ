#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
	int n,m,a,i;
	while(scanf("%d%d",&n,&m),n+m)
	{
		priority_queue<int> q;
		while(n--)
		{
			scanf("%d",&a);
			q.push(a);                                             //   用 优先队列
		}
		for ( i = 0;i < m;i++)
		{
			if(q.empty())
			break;
			if(q.size() == 1)
			printf("%d\n",q.top());
			else if(i == m- 1)
			printf("%d\n",q.top());
			else printf("%d ",q.top());
			q.pop();
		}
	}
	return 0;
}






#include<stdio.h>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
	return a > b;
}
int main()
{
	int s[100010];
	int n,m,i;
	while(scanf("%d%d",&n,&m),n+m)
	{
		for( i = 1;i <= n;i++)
			scanf("%d",&s[i]);
			sort(s+1,s+1+n,compare);                                  //        sort排序 做
		for( i = 1;i <= m&&i <= n;i++)
		{
			if(i > 1)
			printf(" %d",s[i]);
			else printf("%d",s[i]);
		}
		printf("\n");
	}
	return 0;
}