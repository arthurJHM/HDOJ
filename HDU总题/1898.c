#include<stdio.h>
int main()
{
    int n,i,j,a,b,t;
    scanf("%d",&n);
    while(n--){
        i=j=0;
        scanf("%d%d%d",&a,&b,&t);
        i=(t/a)*a;
        j=(t/b)*b;
        if(i>j)printf("Sempr!\n");
        if(i==j)printf("Both!\n");
        if(i<j)printf("Xiangsanzi!\n");
    }
    return 0;
}