#include<stdio.h>
int rt(int c[],int n,int r) {
    int i;
    for(i=0; n>=r; i++) {
        c[i]=n%r;
        n=n/r;
    }
    c[i]=n;
    return i;
}
int main() {
    int i,p,n,a,b;
    while(scanf("%d",&n),n!=0) {
      int  c[1000];
        scanf("%d%d",&a,&b);
        p=rt(c,a+b,n);
        for(i=p; i>=0; i--)
            printf("%d",c[i]);
        printf("\n");
    }
    return 0;
}