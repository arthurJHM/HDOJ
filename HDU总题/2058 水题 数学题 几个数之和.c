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





�۲�a+1,a+2��a+d
ȫ����ӵ���M
��(a+1+a+d)*d/2 = M, 
����d��ƽ�������ǿ��Դӳ���d���֣��������ܰѷ�Χ��Mת����M^1/2 ;
����Ѵ����еĢٺ͢ڽ����£�
�٣���a+1,a+2��a+3��ӵ���Mʱ����
(a+1+a+d)*d/2 = M
��a��С��0������(d+1)*d/2=Mʱdȥ���ֵ�������ⲽ��ʱ�临�Ӷȼ�С�ġ�
d����sqrt(2*M)

�ڣ�(a+1+a+d)*d/2 = M
����a*d + (d+1)*d/2 = M
����Ҫʹ��ʽ������M-(d+1)*d/2������d�ı�����

//MiYuԭ��, ת����ע�� : ת���� ______________�װפ���

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
        int len = int(sqrt(M*2.0));  // ��
        for(i=len; i>=1; --i)
        {
            int temp = M-(i*i+i)/2;   // ��
            if(temp%i == 0)
                printf("[%d,%d]\n", temp/i+1, temp/i+i);
        }
        printf("\n");
    }
    return 0;
}