最近总是莫名其妙的忘记 每次循环的初始化


#include<stdio.h>
int change(int x,int k)
{
	int c;
	c=0;
	while(x){
		c+=x%k;
		x/=k;
	}
	return c;
}
int main()
{
	int n;
	int b10,b12,b16;
	while(scanf("%d",&n),n)
	{
		b10=change(n,10);
		b12=change(n,12);
		b16=change(n,16);
		if(b10==b12&&b12==b16)
		printf("%d is a Sky Number.\n",n);
		else printf("%d is not a Sky Number.\n",n);
	}
	return 0;
}