#include<stdio.h>
int main()
{
	int n,i,j;
	int s[35][35];
	while(scanf("%d",&n)!=EOF){
		for(i=1;i<=n;i++)
			for (j=1;j<=i;j++)
			{
				if(j==1||j==i)
				s[i][j]=1;
				else s[i][j]=s[i-1][j-1]+s[i-1][j];
			}
			for(i=1;i<=n;i++)
				for (j=1;j<=i;j++)
				printf(j==i?"%d\n":"%d ",s[i][j]);
				printf("\n");
				}
				return 0;
}