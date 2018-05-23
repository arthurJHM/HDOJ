#include<stdio.h>
#include<string.h>
int main()
{
	bool flage;
	int m,n;
	int i;
	int a,b,c,d;
	char s[55];
	scanf("%d",&m);
	getchar();
	while(m--){
		a=0;
		b=0;
		c=0;
		d=0;
		flage=1;
		gets(s);
		n=strlen(s);
		if(n<8||n>16) 
		flage=0;
		for(i=0;i<n;i++)
		{
			if(s[i]>='a'&&s[i]<='z')a=1;
			if(s[i]>='A'&&s[i]<='Z')b=1;
			if(s[i]>='0'&&s[i]<='9')c=1;
			if(s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^')d=1;
		}
		if(a+b+c+d<3)flage=0;
		if(flage)
		printf("YES\n");
		else printf("NO\n");
		}
		return 0;
	}
