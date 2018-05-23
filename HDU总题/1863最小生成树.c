#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct Road{
	int c1,c2,cost;
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
	while(scanf("%d%d",&m,&n)&&m){
		for(i=1;i<=m;i++)
		scanf("%d%d%d",&road[i].c1,&road[i].c2,&road[i].cost);
		sort(road+1,road+m+1,cmp);
		memset(father,-1,sizeof(father));
		sum=0;
		count=0;
		for(i=1;i<=m;i++){
			if(merge(road[i].c1,road[i].c2)){
				count++;
				sum+=road[i].cost;
			}
			if(count==n-1)
			break;
		}
		if(count<n-1)printf("?\n");
		else printf("%d\n",sum);
	}
	return 0;
}