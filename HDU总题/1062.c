#include<stdio.h>
#include<string.h>
int main()
{
	int n,len,i,j;
	char a[1010],k[1010];
	scanf("%d ",&n);

	while(n--){
		gets(a);
		j=0;
		len=strlen(a);
		for(i=0;i<=len;i++){
			if(a[i]==' '||a[i]=='\0'){
				k[j]='\0';
				strrev(k);
				printf(a[i]=='\0'?"%s":"%s ",k);
				j=0;
			}
			else	k[j++]=a[i];
				}	printf("\n");
	
	}
	return 0;
}