#include<stdio.h>
int main()
{
	int i,n,gg;
    __int64 a[100],min;
   while(scanf("%d",&n)&&n!=0){
    	for (i=1;i<=n;i++)
    	scanf("%I64d",&a[i]);
    	min=a[1];
    	for (i=1;i<=n;i++)
    	if (min>=a[i]){
   	min=a[i];
    	gg=i;
   }
    	a[gg]=a[1];
    	a[1]=min;   	for (i=1;i<=n;i++)
    	printf((i==n)?"%I64d":"%I64d ",a[i]);		
		printf("\n");
	}
	return 0;
}
