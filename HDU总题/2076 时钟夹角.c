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


����һ�����ڼ�����⣬���Ӱ��֣��ֻ�Ӱ��ʱ�����Թ�ϵҪ�������
ʱ��e=(a)*30+0.5*b+0.5/60*c;��ע����24Сʱ�ƺ�Ϳ��Ա��⣩
�֣�d=b*6+0.1*c;
����ע��ȡ������������%.0lf,���Զ��������룬����Ҫǿ��ת��Ϊint�Ϳ�����


fabs ������
��h>12ʱҪ��ȥ12