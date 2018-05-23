#include<stdio.h>
int main()
{
	bool flage;
	double average[6];
	int i,j;
	int sum;
	int n,m,s[55];
	int grade[55][6];
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=0;i<n;i++){
			s[i]=0;
			for(j=0;j<m;j++)
			{
				scanf("%d",&grade[i][j]);
				s[i]+=grade[i][j];
			}
		}
		for(i=0;i<n;i++)
		printf(i==n-1?"%.2lf\n":"%.2lf ",s[i]*1.0/m*1.0);
	for(i=0;i<m;i++){
		sum=0;
		for(j=0;j<n;j++)
		{
			sum+=grade[j][i];
		}
		average[i]=sum*1.0/n*1.0;
		printf(i==m-1?"%.2lf\n":"%.2lf ",average[i]);
 } 
 	sum=0;
 	for(i=0;i<n;i++){
 		flage=1;
 		for(j=0;j<m;j++)
 		{
 			if(grade[i][j]<average[j])
 				flage=0;	
		 }
		 if(flage) sum++;
	}
	printf("%d\n\n",sum);
}
	return 0;
}