#include<stdio.h>
#include<string.h>
int main()
{
	char s[55];
	int n,m,i;
	while(scanf("%d",&n)!=EOF){
		getchar();
		while(n--){
		gets(s);
		m=strlen(s);
		if(s[0]<='9'&&s[0]>=0){
			printf("no\n");
			continue;
		}
		bool flage=1;
		for (i=0;i<m;i++)
		{
			if(s[i]>='a'&&s[i]<='z'||s[i]<='Z'&&s[i]>='A'||s[i]=='_'||s[i]>='0'&&s[i]<='9');
			else flage=0;
		}
		if(flage) printf("yes\n");
		else printf("no\n");
	}
 } 
 return 0;
}