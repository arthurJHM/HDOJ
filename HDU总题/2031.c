#include <stdio.h>
void zh(int n, int r)
{
    if(n){
        zh(n/r, r);
        if(n%r>9)
        printf("%c",  n%r-10 +'A' );
        else printf("%c",n % r + '0');
}
}
 main()
{
    int n,r;
    while (scanf("%d%d", &n, &r) != EOF)
    {
        if (n > 0)
            zh(n, r);
        else if (n==0)
            putchar('0');
        else
        {
            putchar('-');
            zh(-n, r);
        }
        putchar('\n');
    }
    return 0;
}