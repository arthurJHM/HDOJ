#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct Road{
	int c1,c2,cost;
}road[5051];
int father[101];
int cmp(const Road a,const Road b){
	return a.cost<b.cost;
}
int find(const int n){
	if(father[n]==-1)return n;
	return father[n]=find(father[n]);
}
int merge(const int x,const int y){
	int fx=find(x);
	int fy=find(y);
	if (fx==fy)
	return 0;
	if(fx>fy)father[fx]=fy;
	else father[fy]=fx;
	return 1;	
}
int main()
{
	int n,m,sum,count,i;
	while(scanf("%d",&n)&&n){
		m=n*(n-1)/2;
		for(i=0;i<m;i++)
			scanf("%d%d%d",&road[i].c1,&road[i].c2,&road[i].cost);
			memset(father,-1,sizeof(father));
			sum=0;
			count=0;
			sort(road,road+m,cmp);
			for(i=0;i<m;i++){
				if(merge(road[i].c1,road[i].c2)){
					count++;
					sum+=road[i].cost;
				}
				if(count==n-1)
				break;
			}
			printf("%d\n",sum);
	}
	return 0;
}



以下是 第二次 做这题
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct Road
{
	int c1,c2,cost;
}road[5010];
int father[101];
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
	if(a != b)
	{
			father[a] = b;
			return 1;
	}
	return 0;
}

int main()
{
	int n,i,m;
	int ans;
	while(scanf("%d",&n),n)
	{
		ans = 0;
		for(i = 0;i <= n;i++)
		father[i] = i;
		memset(road,0,sizeof(road));
		m = (n-1)*n/2;
		for(i = 1;i <= m;i++)
			scanf("%d%d%d",&road[i].c1,&road[i].c2,&road[i].cost);
			sort(road+1,road+m+1,cmp);
			for( i = 1; i <= m;i++)
			{
				if(merge(road[i].c1,road[i].c2))
				ans += road[i].cost;
			}
			printf("%d\n",ans);
	}
	return 0;
}