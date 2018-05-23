#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i,temp,len;
	while(scanf("%d%d",&n,&m),n+m){
		len=(int)sqrt(2*m);
		for(i=len;i>=1;i--)
		{
			temp=m-(i*i+i)/2;
			if(temp%i==0)printf("[%d,%d]\n",temp/i+1,temp/i+i);
		}
		printf("\n");
	}
	return 0;
}





观察a+1,a+2…a+d
全部相加等于M
即(a+1+a+d)*d/2 = M, 
这里d是平方，我们可以从长度d入手，这样就能把范围由M转换成M^1/2 ;
这里把代码中的①和②解释下：
①：当a+1,a+2…a+3相加等于M时，即
(a+1+a+d)*d/2 = M
而a最小是0，所以(d+1)*d/2=M时d去最大值，就是这步把时间复杂度减小的。
d就是sqrt(2*M)

②：(a+1+a+d)*d/2 = M
所以a*d + (d+1)*d/2 = M
所以要使等式成立，M-(d+1)*d/2必须是d的倍数。

//MiYu原创, 转帖请注明 : 转载自 ______________白白の屋

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int N, M;
int main()
{
    int flag = 0;
    while(scanf("%d %d", &N, &M) && (M||N))
    {
        int i;
        int len = int(sqrt(M*2.0));  // ①
        for(i=len; i>=1; --i)
        {
            int temp = M-(i*i+i)/2;   // ②
            if(temp%i == 0)
                printf("[%d,%d]\n", temp/i+1, temp/i+i);
        }
        printf("\n");
    }
    return 0;
}