#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int cmp(const void *m,const void *n){
	return (*(int *)m-*(int *)n);
}
int main()
{
	int m,n,i,c1[101],c2[101];
	while(scanf("%d%d",&m,&n)&&(m|n)){
		for (i=0;i<m;i++)
		scanf("%d",&c1[i]);
		for (i=0;i<n;i++)
		scanf("%d",&c2[i]);
		sort(c1,c1+m);
		sort(c2,c2+n);
		int judge=1;
		for (i=0;i<m;i++){
			if(!bsearch(c1+i,c2,n,sizeof(int),cmp))
			{
				printf("%d ",c1[i]);
				judge=0;
			}
		}
		if(judge)
		printf("NULL\n");
		else printf("\n");
	}
	return 0;
}