#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a,const void *b){
    return *(int *)a-*(int *)b;
}
int main()
{
    char s[1010];
    int a[1010],i,j;
    char *gg;
    while(gets(s)){
    a[0]=atoi(strtok(s,"5"));
    i=1;
    while (gg=strtok(NULL,"5"))
    a[i++]=atoi(gg);
    qsort(a,i,sizeof(int),cmp);
    for(j=0;j<i;j++)
    printf (j==i-1?"%d\n":"%d ",a[j]);
    }
    return 0;
}