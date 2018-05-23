#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int s[4];
	int num = 0;
	while(scanf("%d%d%d%d",&s[0],&s[1],&s[2],&s[3])&&(s[0]||s[1]||s[2]||s[3]))
	{
		int tmp,flag = 1;
		if(num != 0)
			printf("\n");
		num++;
		do
		{
			if(s[0] == 0)continue;
			if(flag)
			{
				printf("%d%d%d%d",s[0],s[1],s[2],s[3]);
				flag =  0;
			}
			else if(s[0] == tmp)
				printf(" %d%d%d%d",s[0],s[1],s[2],s[3]);
			else 
				printf("\n%d%d%d%d",s[0],s[1],s[2],s[3]);
			tmp = s[0];
		}
		while(next_permutation(s,s+4));
		printf("\n");
		}	
		return 0;
}