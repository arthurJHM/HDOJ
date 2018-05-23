#include<stdio.h>
#include<math.h>
int main()
{
	int x[110],y[110];
	int n,i;
	int tmp;
	double s;
	while(scanf("%d",&n),n){
		tmp=0;
		for(i=0;i<n;i++)
		scanf("%d%d",&x[i],&y[i]);
		for (i=0;i<n;i++)
		{
			if (i<n-1) 
			tmp+=x[i]*y[i+1]-x[i+1]*y[i];
			else tmp+=x[i]*y[0]-x[0]*y[i];
		}
		s=fabs(tmp*1.0/2);
		printf("%.1lf\n",s);
	}
	return 0;
}