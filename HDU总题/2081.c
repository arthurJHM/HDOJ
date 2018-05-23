#include<stdio.h>
main()
{
    char a[11];
    int n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%s",a);
        a[5]='6';
        for (j=5;j<=10;j++)
        printf("%c",a[j]);
        printf("\n");
    }
    return 0;
}