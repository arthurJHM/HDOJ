#include <math.h>
#include <stdio.h>
int main()
{
    int i, j,m,n,x,y,a,t;
 while (scanf("%d%d", &n, &m) != EOF)
    {
        a=x=y= 0;
        for (i = 1 ; i <=n ; i++)
        {
            for (j = 1; j <= m ; j++)
            {
                scanf("%d", &t);
                if (abs(t) > abs(a))
                {
                    a = t;
                    x = i;
                    y = j;
                }
            }
        }
        printf("%d %d %d\n", x, y, a);
    }
  return 0;
}