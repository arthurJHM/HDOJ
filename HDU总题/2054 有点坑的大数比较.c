��ָ���������  �Ƚϼ��  ����Ҳ���е��ѵ�

��������Ŀӵ�֮������ ����Ҫ ȥ��С����ĩβ�� 0 �Ϳ�ͷ�� 0

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
        while (*p == '0') *p-- =  0;   //��֪��Ϊʲô����ĳ���   ��ָ��ָ���ֵ��Ϊ0 Ҳ�ܹ� AC  �ܸо������ 0 �ĸ�����һ�»ᵼ��  WA   �ѵ���ʼֵ�Ͷ��� 0 ����
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