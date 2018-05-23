用指针做这道题  比较简洁  但是也是有点难的

至于这题的坑爹之处就是 还需要 去掉小数点末尾的 0 和开头的 0

#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
void A(char *s)
{
     int len = strlen(s);
     char *p = s + len - 1;
    if (strchr(s, '.'))
        while (*p == '0') *p-- ='\0';
    if (*p == '.') *p = 0;
}

int main(void)
{
    char *pa, *pb;
   char a[100000], b[100000];

   while (scanf("%s%s", &a, &b) != EOF)
    {
       pa = a; pb = b;
    	while (*pa == '0')
            pa++;
    	while (*pb == '0')            
			pb++;
        A(pa);
        A(pb);
        puts(strcmp(pa, pb) ? "NO" : "YES");
    }

    return 0;
}




#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
void A(char *s)
{
     int len = strlen(s);
     char *p = s + len - 1;
    if (strchr(s, '.'))
        while (*p == '0') *p-- =  0;   //不知道为什么就算改成了   将指针指向的值改为0 也能够 AC  总感觉后面的 0 的个数不一致会导致  WA   难道初始值就都是 0 ？？
    if (*p == '.') *p = 0;
}

int main(void)
{
    char *pa, *pb;
   char a[100000], b[100000];

   while (scanf("%s%s", &a, &b) != EOF)
    {
       pa = a; pb = b;
    	while (*pa == '0')
            pa++;
    	while (*pb == '0')            
			pb++;
        A(pa);
        A(pb);
        puts(strcmp(pa, pb) ? "NO" : "YES");
    }

    return 0;
}