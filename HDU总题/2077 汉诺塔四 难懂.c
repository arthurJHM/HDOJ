#include <iostream>
#include <cmath>
using namespace std;
long long myPow ( int n , int e )
{
     long long mlt = 1;
     for ( int i = 1; i <= e ; ++ i )
     {
           mlt *= n; 
     } 
     return mlt;
}
int main ()
{
    int N;
    while ( cin >> N )
    {
          cout << myPow ( 3, N - 1 ) + 1 << endl;
    }
    return 0; 
}

//这个是网上的做法


因为最大的可以放在最上面, 所以就不能像 汉诺塔III那样把前n-1个盘全部从1->3了.
  
只要把前n-1个盘从1->2,然后把第n个盘1->2->3,然后把前n-1个盘2->3, 这样就完成了.

所以,问题现在转换成 n 个盘移动一步需要多少次.   我们可以看到, 除了最后一个最

大的盘n以外, 前n-1个盘的移动方式是和 汉诺塔III的规则是一样的.所以我们先把前
 
n-2 个盘 1->3, 然后把 第n-1个盘 1->2, 再把前n-2个盘 3->2, 这样就把前 n-1个盘
 
1->2 移动了一步.
因为把 n 个盘 按找汉诺塔III的方法 1->3 需要 3n -1 推导见 :

                              HDOJ HDU 2064 汉诺塔III ACM 2064 IN HDU 

所以由上面描述的步骤知道把 n 个盘移动一步需要 : f(n) = f(n-1) + ( 3n-1 - 1 ) + 1 = f (n-1) + 3n-1 而 f(1) = 1 
由递推式化简得: f(n) = 3n-1 + 3n-2 + ...+ 3 + 1 = ( 3n -1 ) / 2
所以按 汉诺塔IV的规则, 移动 n 个盘 需要 : m(n) = 2 * f (n-1) + 2 = 3n-1 + 1

还是不大明白直接加2 的原因
据说是。。。。。。同样是找规律，与hdoj2064题类似，只是n个圆盘移动，只要将n-1个圆盘依次移动，第n个圆盘在n-1个圆盘移动的过程中移动两次足矣，即移动次数F(n)=f(n-1)+2（f函数为2064题的函数，详见hdoj.2064）



#include<stdio.h>
int main()
{
	__int64 s[21],temp;
	int n,i,m;
	scanf("%d",&n);
	s[0]=0;
	s[1]=2;
	for(i=2;i<=20;i++)
	s[i]=(3*s[i-1]+2);
	while(n--)
	{
		scanf("%d",&m);
		temp=s[m-1]+2;
		printf("%I64d\n",temp);
	}
	return 0;
}