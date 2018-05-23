#include<stdio.h>
int pan(int x)
{
    int i,t;
    t=1;
    for(i=2;i<=x/2;i++)
        if(x%i==0)
        {
            t=0;
            break;
        }
    return t;
}
int main()
{
    int n,i,b,j,ge;
    while(scanf("%d",&n)!=EOF)
    {
        ge=0;
        if(n==0)
        return 0;
        for(i=2;i<n/2;i++)
        {
            j=n-i;
            if(pan(i)&&pan(j))
            ge++;
        }
        printf("%d\n",ge);
    }
}