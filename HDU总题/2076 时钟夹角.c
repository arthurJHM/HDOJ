#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double d1,d2,h,m,s;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lf%lf%lf",&h,&m,&s);
		if(h>=12) 
		h-=12;
		d1=h*30+m/2+s/120;
		d2=m*6+s/10;
		double q=fabs(d1-d2);
		if(q>180) {
			q=360-q;
		printf("%d\n",(int)q);
		}
		else
		printf("%d\n",(int)q);
	}
	return 0;
}


这是一道关于计算的题，秒会影响分，分会影响时，所以关系要理清楚，
时：e=(a)*30+0.5*b+0.5/60*c;（注意是24小时制后就可以避免）
分：d=b*6+0.1*c;
还有注意取整数不可以用%.0lf,会自动四舍五入，所以要强制转化为int就可以了


fabs 的运用
在h>12时要减去12