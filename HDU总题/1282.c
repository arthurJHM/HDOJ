#include<stdio.h>
int pan(int n){
	int sum=0;
	while(n!=0){
	sum=sum*10+n%10;
	n/=10;
	}
	return sum;
	}
int main()
{
	int n[1000],g,i,j;
	while(scanf("%d",&n[0])!=EOF){
		i=0;
    while(pan(n[i])!=n[i]){
    n[i+1]=pan(n[i])+n[i];
	i++;
	}
	printf("%d\n",i);
	for(j=0;j<=i;j++)
	printf(j==i?"%d\n":"%d--->",n[j]);
 } 
 return 0;
}