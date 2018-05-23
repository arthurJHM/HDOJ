#include<stdio.h>
int main()
{
	int n,i,m,sum;
	while(scanf("%d",&n),n){	
		sum=0;
		while(n--){
			scanf("%d",&m);
			sum+=m/100;
			m%=100;
			sum+=m/50;
			m%=50;
			sum+=m/10;
			m%=10;
			sum+=m/5;
			m%=5;
			sum+=m/2;
			m%=2;
			sum+=m;
		}	
		printf("%d\n",sum);
	}
	return 0;
}