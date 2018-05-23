
或异是好理解 
这是自己的代码
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


再贴一下傻逼一样的暴力 要不数组开小
要不 存储空间不足错误
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





最后贴一下网上的




题目大意：在输入的数列中 找唯一出现奇数次的一个数。

一开始没看到memory limit 直接开了个100000的int数组 然后排序 找出在奇数数位置上与下一位不同的数。

网上的大牛们还是那么牛 巧妙地用异或运算 还有用map映射

复习下异或~

0^0 =0

0^1=1

1^0=1

1^1=0

可以发现 任何数异或0还是他本身。

一个数异或另一个数偶数次还是他本身。奶奶的，这思路。。。我在看看映射去。。。

[cpp] view plain copy
#include <stdio.h>  
//题目中Odd  是奇数的意思  
int main()  
{  
    int num,n,result,i;  
    while(scanf("%d",&n),n){  
        result=0;  
        for(i=0;i<n;++i){  
            scanf("%d",&num);  
            result^=num;//异或  
        }  
        printf("%d/n",result);  
    }  
    return 0;  
}  

 
 

MAP版本：

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