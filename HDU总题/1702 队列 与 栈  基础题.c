#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;
int main()
{
	int n,m,t;
	char type[10];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%s",&m,type);
		if(strcmp(type,"FIFO") == 0)
		{
			queue<int>q;
			while(m--)
			{
				scanf("%s",type);
				if(strcmp(type,"IN") == 0)
				{
					scanf("%d",&t);
					q.push(t);	
				}
				else if(strcmp(type,"OUT") == 0)
				{
					if(q.empty())
					printf("None\n");
					else
					{
						printf("%d\n",q.front());
						q.pop();
					}
				}
			
			}
		}
		else if(strcmp(type,"FILO") == 0)
		{	
			stack<int>s;
			while(m--)
			{
				scanf("%s",type);
				if(strcmp(type,"IN") == 0)
				{
					scanf("%d",&t);
					s.push(t);
				}
				else if(strcmp(type,"OUT") == 0)
				{
					if(s.empty())
					printf("None\n");
					else 
					{
						printf("%d\n",s.top());
						s.pop();	
					}
				}
				
			}
		}
	}
	return 0;
}