#include<stdio.h>
#include<string.h>
#include<ctype.h>
char h[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char s[120];
void hh()
{
	int i,j;
	for (i=0;i<=strlen(s);i++){
	if (isupper(s[i])){
		j=(s[i]-'A'+21)%26;
		s[i]=h[j];
	}
	}
}
int main()
{	
	while(gets(s)){
		if(strcmp(s,"ENDOFINPUT")==0)
		return 0;
		while (gets(s)){
		if(strcmp(s,"END")==0)
		break;
		hh();
		printf("%s\n",s);
	}
}
	return 0;
}