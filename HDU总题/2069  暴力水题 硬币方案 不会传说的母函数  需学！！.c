暴力解法

#include<stdio.h>
#include<string.h>
int main()
{
	int c1,c5,c10,c25,c50;
	int s[251];
	int n;
	int i;
	memset(s,0,sizeof(s));
	for(i=0;i<=250;i++)
	for (c50=0;c50*50<=i;c50++)
		for(c25=0;c25*25+c50*50<=i;c25++)
			for(c10=0;c10*10+c25*25+c50*50<=i;c10++)
				for(c5=0;c5*5+c10*10+c25*25+c50*50<=i;c5++)
					{
						c1=i-c5*5-c10*10-c25*25-c50*50;
						if(c1+c5+c10+c25+c50<101)
							s[i]++;
					}
				
					while(scanf("%d",&n)!=EOF){
						printf("%d\n",s[n]);
					}
					return 0;
} 





母函数解法


//加一维限制数量。。。。。。

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int value[6]={0,1,5,10,25,50};

int c1[300][110],c2[300][110];
int n;

int main()
{
while(scanf("%d",&n)!=EOF)
{
   memset(c1,0,sizeof(c1));
   memset(c2,0,sizeof(c2));

   for(int i=0;i<=min(n,100);i++)
   {
        c1[i][i]=1;
   }

   for(int i=2;i<=5;i++)
   {
       for(int j=0;j<=n;j++)
       {
           for(int k=0;k+j<=n;k+=value[i])
           {
               for(int l=0;l<=100&&l+k/value[i]<=100;l++)
               {
                   c2[j+k][l+k/value[i]]+=c1[j][l];
               }
           }
       }

       for(int j=0;j<=n;j++)
       {
           for(int k=0;k<=100;k++)
           {
               c1[j][k]=c2[j][k];
               c2[j][k]=0;
           }
       }
   }

   int ans=0;
   for(int j=0;j<=100;j++)
   {
       ans+=c1[n][j];
   }

   printf("%d\n",ans);

}
    return 0;
}