#include<stdio.h>
#include<string.h>
int main()
{
	char s[110],t;
	int flage[110],i,m;
	while(scanf("%s",s)!=EOF){
		m=strlen(s);
		t=s[0];
		for(i=1;i<m;i++)					//找出最大的字母 
			if(s[i]>t)
			t=s[i];
			for(i=0;i<m;i++)
			{
				if(s[i]==t)
				printf(i==m-1?"%c(max)\n":"%c(max)",s[i]);
				else printf(i==m-1?"%c\n":"%c",s[i]);
			}
	}
	return 0;
}