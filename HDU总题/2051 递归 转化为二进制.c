#include<stdio.h>
int change(int a)
{
	if(a/2){
	change(a/2);
	}
	printf("%d",a%2);
}
int main()
{
	int m;
	while(scanf("%d",&m)!=EOF){
		change(m);
		printf("\n");
		}
		return 0;
	}



递归 可以装逼啊！！！



//一般方法

#include<stdio.h>
int main()
{
	int s[10];
	int m,i,j;
	while(scanf("%d",&m)!=EOF){
		i=1;
	while(m){
		s[i]=m%2;
		m/=2;
		i++;
	}
	j=i-1;
	for(i=j;i>=1;i--)
	printf("%d",s[i]);
	printf("\n");
	}
	return 0;
}