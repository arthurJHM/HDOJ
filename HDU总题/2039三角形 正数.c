#include<stdio.h>
int main()
{
	double a,b,c;
	int m;
	scanf("%d",&m);
	while(m--){
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b)
	printf("YES\n");
	else printf("NO\n");		
	}
	return 0;
}