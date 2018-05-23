#include<stdio.h>
#include<math.h>
int main()
{
	int m,a[110],i,j,t;
	while(scanf("%d",&m)&&m!=0){
		for(i=1;i<=m;i++)
		scanf("%d",&a[i]);
		for(i=1;i<=m;i++)
			for(j=1;j<=m;j++)
				if(abs(a[i])<abs(a[j])){
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
				for(i=m;i>=1;i--)
				printf(i==1?"%d\n":"%d ",a[i]);
		}
		return 0;
	}
