��Ȩ����������Ϊ����ԭ�����£�δ������������ת�ء�

Problem Description
�����·��̣�Ai = (Ai-1 + Ai+1)/2 - Ci (i = 1, 2, 3, .... n).
������A0, An+1, �� C1, C2, .....Cn.
���̼���A1 = ?

Input
��������������ʵ����
����ÿ��ʵ����������һ��������n,(n <= 3000); Ȼ����2����a0, an+1.��������n��ÿ����һ����ci(i = 1, ....n);�������ļ�������������

Output
����ÿ������ʵ������һ���������õ�a1(����2λС��).
-----------------------------------------------------------------------------------------------------

������ѧ�⣬�ҹ���:
An = (1/2)An-1 + (1/2)An+1 - Cn
An-1 = (2/3)An-2 + (1/3)An+1 - (2/3)Cn - (4/3)Cn-1
An-2 = (3/4)An-3 + (1/4)An+1 - (1/2)Cn - Cn-1 - (3/2)Cn-2
An-3 = (4/5)An-4 + (1/5)An+1 - (2/5)Cn - (4/5)Cn-1 - (6/5)Cn-2 - (8/5)Cn-3
......
���ǲ����е�о����أ�
����:
A1 = (n/(n+1))A0 + (1/(n+1))An+1 - (2/(n+1))Cn - (4/(n+1))Cn-1 - ... -(2n/(n+1))C1
     = [ nA0 + An+1 - 2(Cn + 2Cn-1 + 3Cn-2 + ... + nC1) ]/(n+1)

C++���� : Codee#7546
//HDOJ 2086 
#include <iostream> 
using namespace std ;
int main ()
{ 
    const int MaxSize = 3001 ;
    int n;
    double a1 , a0 , end ;
    double c [ MaxSize ]; 
    while (cin >> n)
    { 
        cin >> a0 >> end ;
        for (int i = 0 ;i < n;++ i )
            cin >> c [ i ]; 
        a1 = n* a0 + end ;
        for (int i = 0 ;i < n;++ i )
            a1 -= 2 * (i + 1 )* c [ n- 1 - i ]; 
        a1 = a1 / (1 + n);
        printf ("%.2f /n " , a1 );
    } 
    return 0 ;
} 






�Լ���

��ʵ���ǲ�֪����ô��
#include <stdio.h>
int main ()
{
    int n, i;
    double a0, an1, a1;
    double c[3000];
    while ( scanf ( "%d", &n) != EOF )
    {
        scanf ( "%lf%lf", &a0, &an1 );
        for ( i = 0; i < n; i++ )
        {
             scanf("%lf", c + i);
        }
        a1 = n * a0 + an1;
        for ( i = 1; i <= n; i++ )
        {
              a1 -= 2 * i * c[n - i];
        }
        printf ( "%.2f\n", a1 / ( n + 1 ) );
    }
    return 0;
}