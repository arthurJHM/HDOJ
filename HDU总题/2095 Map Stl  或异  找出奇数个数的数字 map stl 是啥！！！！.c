
�����Ǻ���� 
�����Լ��Ĵ���
#include<stdio.h>
int main()
{
	int n,m,i;
	while(scanf("%d",&n),n)
	{
		int temp=0;
		while(n--)
		{
			scanf("%d",&m);
			temp^=m;
		}
		printf("%d\n",temp);
	}
	return 0;
}


����һ��ɵ��һ���ı��� Ҫ�����鿪С
Ҫ�� �洢�ռ䲻�����
#include<stdio.h>
#include<string.h>
int s[1000010];
int main()
{
	int n,i,m;
	while(scanf("%d",&n),n)
	{
		memset(s,0,sizeof(s));
		while(n--){
		scanf("%d",&m);
		s[m]++;
		}
		for(i=1;i<=1000000;i++)
		{
			if(s[i]%2)printf("%d\n",i);
		}
	}
	return 0;
 } 





�����һ�����ϵ�




��Ŀ���⣺������������� ��Ψһ���������ε�һ������

һ��ʼû����memory limit ֱ�ӿ��˸�100000��int���� Ȼ������ �ҳ���������λ��������һλ��ͬ������

���ϵĴ�ţ�ǻ�����ôţ �������������� ������mapӳ��

��ϰ�����~

0^0 =0

0^1=1

1^0=1

1^1=0

���Է��� �κ������0����������

һ���������һ����ż���λ������������̵ģ���˼·���������ڿ���ӳ��ȥ������

[cpp] view plain copy
#include <stdio.h>  
//��Ŀ��Odd  ����������˼  
int main()  
{  
    int num,n,result,i;  
    while(scanf("%d",&n),n){  
        result=0;  
        for(i=0;i<n;++i){  
            scanf("%d",&num);  
            result^=num;//���  
        }  
        printf("%d/n",result);  
    }  
    return 0;  
}  

 
 

MAP�汾��

#include <iostream>  
#include <cstdio>  
#include <map>  
using namespace std;  
int main()  
{  
    int n, i, t;  
    while(EOF != scanf("%d", &n), n)  
    {  
        map<int, int> v;  
        for(i = 0; i < n; ++i)  
        {  
            scanf("%d", &t);  
            ++v[t];  
        }  
        map<int, int>::iterator iter;  
        for(iter = v.begin(); iter != v.end(); ++iter)  
        {  
            if(iter->second == 1)  
            {  
                printf("%d/n", iter->first);  
                break;  
            }  
        }  
    }  
    return 0;  
}  