#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	__int64 h[110];
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		scanf("%lf",&h[i]);
		sort(h+1,h+n+1);
		printf("%.2lf\n",h[n]);
	}
	return 0;
}