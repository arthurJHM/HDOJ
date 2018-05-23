#include<stdio.h>
#include<string.h>
	struct note
	{
		char id[20];
		char intime[20];
		char outtime[20];
	}  s[1000];
int main()
{	
	char c[20];
	int n,m,i,j,h,hh;
	while(scanf("%d",&n)!=EOF){
	while(n--){
		scanf("%d",&m);
		h=0;hh=0;
		for(i=0;i<m;i++)
		scanf("%s%s%s",s[i].id,s[i].intime,s[i].outtime);
		if(m==1)
		printf("%s %s\n",s[0].id,s[0].id);
		if(m>1){
		strcpy(c,s[0].intime);
		for (i=1;i<m;i++){
			if(strcmp(c,s[i].intime)>0){
			strcpy(c,s[i].intime);
			h=i;
						}
					}
		strcpy(c,s[0].outtime);			
		for(i=1;i<m;i++){
			if(strcmp(s[i].outtime,c)>0){
				strcpy(c,s[i].outtime);
				hh=i;
			}
		}	
		printf("%s %s\n",s[h].id,s[hh].id);
		}
	
	}
}
	return 0;
		}