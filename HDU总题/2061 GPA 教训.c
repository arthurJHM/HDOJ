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


֮ǰ ��sum c s zc ������� int  ���ǿ��ת��Ϊ double ������� time limit   
������ѵ �Ժ�Ҫ������ double  
��Ȼ���ǲ�֪��Ϊʲô
���ѧϰ��������