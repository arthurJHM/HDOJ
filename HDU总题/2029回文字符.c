#include<stdio.h>
#include<string.h>
int main()
{
	int m,i,n;
	int flage;
	char s[100];
		scanf("%d",&m);
		getchar();
		while(m--)
		{
			memset(s,'\0',sizeof(char));
			gets(s);
			n=strlen(s);
			flage=1;
			for(i=n-1;i>=n/2;i--)
				if(s[i]!=s[n-1-i]){
				flage=0;
				break;
			}
				if(flage)
				printf("yes\n");
				else printf("no\n");
		}
	return 0;
}