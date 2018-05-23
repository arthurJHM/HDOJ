#include<stdio.h>
#include<string.h>
int main()
{
	int m,n,j,k;
	int a,e,i,o,u;
	char s[110];
	while(scanf("%d",&m)!=EOF){
		getchar();
		for(j=0;j<m;j++)
		{
			a=0;
			e=0;
			i=0;
			o=0;
			u=0;
			gets(s);
			n=strlen(s);
			for(k=0;k<n;k++)
				{
					if(s[k]=='a')a++;
					if(s[k]=='e')e++;
					if(s[k]=='i')i++;
					if(s[k]=='o')o++;
					if(s[k]=='u')u++;
				}
				printf("a:%d\n",a);
				printf("e:%d\n",e);
				printf("i:%d\n",i);
				printf("o:%d\n",o);
				printf("u:%d\n",u);
				if(j!=m-1)
				printf("\n");
		}
	}
	return 0;
}