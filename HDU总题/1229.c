#include<stdio.h>
int main()
{
    int a,b,k,i,z;
    while(scanf("%d%d%d",&a,&b,&k)!=EOF&&a&&b){
        z=10;
    for (i=2;i<=k;i++)
    z*=10;
    if(a%z==b%z)printf("-1\n");
    else printf("%d\n",a+b);
    }
    return 0;
    
}