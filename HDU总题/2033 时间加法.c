#include<stdio.h>
int main()
{
	int ah,am,as,bh,bm,bs;
	int h,m,s;
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d%d%d",&ah,&am,&as,&bh,&bm,&bs);
		s=(as+bs)%60;
		m=((as+bs)/60+am+bm)%60;
		h=((as+bs)/60+am+bm)/60+ah+bh;
		printf("%d %d %d\n",h,m,s);
	}
	return 0;
}