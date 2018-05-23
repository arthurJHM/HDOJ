#include<stdio.h>
#include<string.h>
int main()
{
	char a[1010],b[1010];
	int len,sum;
	char *p;
	while(scanf("%s",a),a[0]!='#'){
			scanf("%s",b);
			len=strlen(b);
		for(p=a,sum=0;p=strstr(p,b);p+=len,sum++);
			printf("%d\n",sum);
	}
	return 0;
}


//strstr