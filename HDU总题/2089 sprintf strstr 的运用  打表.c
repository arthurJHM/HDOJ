#include<stdio.h>
#include<string.h>
int i;
int s[1000001];
char c[20];
int main()
{
	memset(s,0,sizeof(s));
for(i=1;i<=1000000;i++)
{
	memset(c,NULL,sizeof(c));
	sprintf(c,"%d",i);
	if( !strstr(c, "62") && !strstr(c, "4") )
                s[i] = 1;
}
	int a,b;
	while(~scanf("%d%d",&a,&b)&&a+b)
	{
		int sum=0;
		for(i=a;i<=b;i++)
		if(s[i])sum++;
		printf("%d\n",sum);
	}
return 0;
}