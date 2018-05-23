#include<stdio.h>
#include<stdlib.h>
int comp(const void *a,const void *b)
{
	return *(int*)a-*(int*)b;
}
int main()
{
	int a[100],i,j,n,average;
    while(scanf("%d",&n)!=EOF){
    	for (i=0;i<n;i++)
    	scanf("%d",&a[i]);
    	qsort(a,i,sizeof(int),comp);
    	average=0;
    	for (j=1;j<i-1;j++)
    	average+=a[j];
    	printf("%.2lf\n",(double)average/(i-2));
	}
	return 0;
}