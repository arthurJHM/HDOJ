#include<stdio.h>
int main()
{
	int n,s[51],i,sum,m;
	int k=1;
	while(scanf("%d",&n),n)
	{
		if(!k)
		printf("\n");
		k=0;
		sum=0;
		m=0;
		for(i=1;i<=n;i++)
		{
		scanf("%d",&s[i]);
		sum+=s[i];
		}
		sum/=n;
		for(i=1;i<=n;i++)
		{
			if(s[i]>sum)
			m+=(s[i]-sum);
		}
		printf("%d\n",m);
	}
	return 0;
}