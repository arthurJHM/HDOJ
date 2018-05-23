#include<stdio.h>
#include<string.h>
int main()
{
	int m,n,i;
	int sum;
	char s[200];
	scanf("%d",&m);
	getchar();
	while(m--){
		sum=0;
		gets(s);
		n=strlen(s);
		for(i=0;i<n;i++){
			if(s[i]<0)sum++;
		}
		printf("%d\n",sum/2);
	}
	return 0;
}