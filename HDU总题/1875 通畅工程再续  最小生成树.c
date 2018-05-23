#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

struct Island
{
	int xi,yi,father,z;
}island[101];


struct Bridge
{
	int a,b;
	double price;
}bridge[10010];

int cmp(Bridge a,Bridge b)
{
	return a.price < b.price;
}

int find(int x)
{
	int t;
	int child = x;
	while(x != island[x].father)
	{
		x = island[x].father;
	}
		while(x != child)
		{
			t=island[child].father;
			island[child].father = x;
			child = t;
		}	
	return x;
}

int merge(int x,int y)
{
	int a =find(x);
	int b =find(y);
	if(a != b)
	{
		island[a].father = b;
		return 1;
	}
	return 0;	
} 


int main()
{
	int n,m,i,j,k,g,t; //g 是用来优化最后一步  如果当所有的岛都联通之后 停止 造桥 
	double ans;
	scanf("%d",&t);
	while(t--)
	{
		k = 1;
		g =1;
		ans = 0.0;
		memset(bridge,0,sizeof(bridge));
		memset(island,0,sizeof(island));
		for(i = 0;i <= 100;i++ )
		island[i].father = i;
		scanf("%d",&n);
		for (i = 1;i <= n;i++)
		{
			scanf("%d%d",&island[i].xi,&island[i].yi);
			island[i].z = i;
			for( j = 1;j < i;j++)
			{
				if(sqrt((island[i].xi - island[j].xi)*(island[i].xi - island[j].xi) +(island[i].yi - island[j].yi)*(island[i].yi - island[j].yi)) <=1000 && sqrt((island[i].xi - island[j].xi)*(island[i].xi - island[j].xi) +(island[i].yi - island[j].yi)*(island[i].yi - island[j].yi) )>= 10)				
				{
				bridge[k].a = i;
				bridge[k].price = sqrt((island[i].xi - island[j].xi)*(island[i].xi - island[j].xi) +(island[i].yi - island[j].yi)*(island[i].yi - island[j].yi) );
				bridge[k++].b = j; 
				}
			}		
		}	
			sort(bridge+1,bridge+k,cmp);
			for(i = 1;i < k;i++)
			{
				if (merge(bridge[i].a,bridge[i].b))
				{
				ans += bridge[i].price;
				g++;
				}				
				if(g == n)
				break;
			}
			g = 0;  //多次利用 而已 
			for(i = 1;i <= n;i++)
			if(island[i].father == i)
				g++;
				if(g > 1 )
			printf("oh!\n");
			else
			printf("%.1lf\n",ans*100);
	}
	return 0;
}




附上网上的方法



#include<stdio.h>
#include<math.h>
#include<string.h>
struct Point
{
       int x,y;
} pt[105];
double d[105],map[105][105];
bool v[105];
int c;
double Dist(Point a,Point b)
{
       return sqrt( (a.x-b.x)*(a.x-b.x)*1.0+(a.y-b.y)*(a.y-b.y) );
}
void Graph()
{
     int i,j;
     double t;
     memset(map,0,sizeof(map));
     for( i=0; i<c-1; i++){
          for( j=i+1; j<c; j++){
               t=Dist(pt[i],pt[j]);
               if( t>=10&&t<=1000){
                   map[i][j]=t;
                   map[j][i]=t;
               }
          }
     }
}
double Prim()
{
    int i,j,pt;
    double ret,mim;
    memset(d,0,sizeof(d));
    memset(v,false,sizeof(v));
    pt=0;  v[0]=true;  ret=0;
    while( true){
           for( i=0; i<c; i++) 
                if( !v[i]&&map[pt][i]&&(d[i]>map[pt][i]||d[i]==0) )
                    d[i]=map[pt][i];  
           pt=-1; mim=10000;
           for( i=0; i<c; i++){
                if( !v[i]&&d[i]&&mim>d[i] ){
                    mim=d[i];
                    pt=i;
                }
           }       
           v[pt]=true;
           if( pt==-1) break;
          ret+=mim; 
    }
    for( i=0; i<c; i++)//判断是否联通
         if( !v[i])
             return -1; 
    return ret;
}
int main()
{
    int t,i;
    double ret;
    scanf("%d",&t);
    while( t--){
           scanf("%d",&c);
           for( i=0; i<c; i++)
                  scanf("%d%d",&pt[i].x,&pt[i].y); 
           Graph();
           ret=Prim();
           if( ret==-1)
               printf("oh!\n");
           else{
                ret=ret*100;
                printf("%.1lf\n",ret);
           }
    }
    return 0;
}