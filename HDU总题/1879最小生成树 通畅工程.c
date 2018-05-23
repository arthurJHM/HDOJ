#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct Road{
	int c1,c2,cost,done;
}road[5051];
int father[110];
int cmp(const Road a,const Road b){
	return a.cost<b.cost;
}
int find(int x){
	if(father[x]==-1)
	return x;
	return father[x]=find(father[x]);
}
int merge(int a,int b){
	int x=find(a);
	int y=find(b);
	if(x==y)return 0;
	if(x>y)father[x]=y;
	else father[y]=x;
	return 1;
}
int main()
{
	int n,m,count,sum,i;
	while(scanf("%d",&n)&&n){
		sum=0;
		count=0;
		memset(father,-1,sizeof(father));
		m=n*(n-1)/2;
		for(i=1;i<=m;i++){
		scanf("%d%d%d%d",&road[i].c1,&road[i].c2,&road[i].cost,&road[i].done);
		if(road[i].done&&merge(road[i].c1,road[i].c2))
		count++;
		}
		sort(road+1,road+m+1,cmp);
		
		for(i=1;i<=m;i++){
			if(merge(road[i].c1,road[i].c2)&&road[i].done==0){
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