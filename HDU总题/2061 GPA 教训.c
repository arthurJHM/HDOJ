#include<stdio.h>
int main()
{
	int n,m,i;
	double c,s,sum,zc;
	scanf("%d",&n);
	while(n--)
	{
		bool flage=0;
		sum=0;
		zc=0;
		scanf("%d",&m);
		while(m--){
			scanf("%*s%lf%lf",&c,&s);	
			if(flage)continue;
			if(s<60&&s>=0){
			flage=1;
			}
			sum+=c*s;
			zc+=c;
			
		}
		printf(flage?"Sorry!\n":"%.2lf\n",sum/zc);
		if(n)printf("\n");
	}
	return 0;
}


之前 将sum c s zc 都设成了 int  最后强制转化为 double 结果都是 time limit   
长个教训 以后要尽量用 double  
虽然还是不知道为什么
多多学习啊！！！