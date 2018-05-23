#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
#include<stack>
int main()
{
	int m;
	bool flage[20];
	int i;
	char in[10],out[10];
	while(scanf("%d %s%s",&m,in,out)!=EOF)
	{
			stack<int>s;
			memset(flage,-1,sizeof(flage));
			int j = 0;
			int k = 0;		
					for (i = 0;i < m ;i++)
					{
						s.push(in[i]);
						flage[k++] = 1;
						while(!s.empty() &&s.top() == out[j])
						{
							flage[k++] = 0;
							s.pop();
							j++;
						}
					}	
			if(k != 2*m)
			{
				printf("No.\nFINISH\n");
			}						
			else
			{
				printf("Yes.\n");
				for( i = 0 ;i < 2*m;i++)
				{
					if(flage[i])
					printf("in\n");
					else
					printf("out\n");
				}
				printf("FINISH\n");
			}
	}
	return 0;
} 