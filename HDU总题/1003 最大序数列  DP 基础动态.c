#include<stdio.h>
int main()
{
	int t,n,i,a;
	int now,max,tep;
	int x,j;
	int pos1,pos2;
	scanf("%d",&t);
	for(i = 1; i <= t;i++)
	{
		scanf("%d%d",&n,&a);
		now = max = a;
		pos1 = pos2 = x = 1;
		for( j = 2;j <= n;j++)
		{
			scanf("%d",&a);
			if(now + a < a)
			now = a,x = j;
			else
			now += a;
			if(now > max)
				max = now,pos1 = x,pos2 = j;
		}
		printf("Case %d:\n%d %d %d\n",i,max,pos1,pos2);
		if(i != t)
		printf("\n");
	}
	return 0;
}