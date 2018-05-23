#include<stdio.h>
int main()
{
	int a,b,i,j,zhi,c[100];
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a==0&&b==0)break;
		j=0;
		for(i=0;i<=99;i++){
			zhi=i+a*100;
			if(zhi%b==0)
			c[j++]=i;
	}
	for (i=0;i<j;i++){
		if(c[i]>=10)
	printf(i==j-1?"%d\n":"%d ",c[i]);
	else printf(i==j-1?"0%d\n":"0%d ",c[i]);
	}
}
return 0;
}