#include<stdio.h>
#include<string.h>
int main()
{
	char s[110];
	int m,i;
	while(gets(s))
	{
		m=strlen(s);
		printf("%c",s[0]-32);
		for(i=1;i<m;i++){
			if(s[i-1]==' ')
			printf(i==m-1?"%c\n":"%c",s[i]-32);
			else printf(i==m-1?"%c\n":"%c",s[i]);
		}
	}
	return 0;
}