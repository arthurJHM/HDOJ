#include<stdio.h>
#include<string.h>
int main()
{
    int z,o,j,i,len;
    char s[110];
    while(gets(s)){
        if(s[0]=='E')return 0;
        z=o=j=0;
        len=strlen(s);
        for(i=0;i<len;i++){
        if(s[i]=='Z')z++;
        if(s[i]=='O')o++;
        if(s[i]=='J')j++;
    }
    while(z||j||o){
        if(z){printf("Z");
        z--;
        }
        if(o){printf("O");
        o--;
        }
        if(j){printf("J");
        j--;
        }
    }
    printf("\n");
    }
    return 0;
}