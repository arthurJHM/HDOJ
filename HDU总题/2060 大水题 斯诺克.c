只是读题目的问题

#include<stdio.h>
int main()
{
	int left,n,ps,os,i;
	int score[7]={0,2,3,4,5,6,7};
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&left,&ps,&os);
		if(left>6)
			ps+=(left-6)*8+27;
		else {
			for(i=6;i>6-left;i--)
			ps+=score[i];
		}
		if(ps>=os)printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}