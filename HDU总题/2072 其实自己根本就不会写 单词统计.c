#include<stdio.h>
#include<string.h>
char str[1001];
char ss[1001][100];
char temp[1010];
int main()
{
    memset(str,0,sizeof(str));
    while(gets(str))
    {
        memset(ss,'\0',sizeof(ss));
        int at = 0;
        if(str[0] =='#')break;
        int len = strlen(str);
        int i = 0;
        while( i < len)
        {
            int j ;
           memset(temp,0,sizeof(temp));
            for( j = 0;str[i] != ' '&& i < len; i ++)
                temp[j++] = str[i];
            if( j > 0)
            {
                int k;
                for(  k = 0; k < at; k++)
                    if(strcmp(temp,ss[k])==0)break;
                if(k == at)strcpy(ss[at++],temp);
            }
             i ++;
        }
        printf("%d\n",at);
       memset(str,0,sizeof(str));
    }
    return 0;
}