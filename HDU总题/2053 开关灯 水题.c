#include<stdio.h>
int main()
{
	int m,i;
	int flage;
	while(scanf("%d",&m)!=EOF){
		flage=0;
		for(i=1;i<=m/2;i++){
			if(m%i==0) flage++;
		}
		if(flage%2)
		printf("0\n");
		else printf("1\n");
	}
	return 0;
}

关注被整除多少次就行