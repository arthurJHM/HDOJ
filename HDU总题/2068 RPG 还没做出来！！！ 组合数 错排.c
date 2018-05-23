http://blog.csdn.net/zwj1452267376/article/details/47984263


#include<cstdio>  
  
__int64 c(int n,int m)  
{  
    int i;  
    __int64 x=1;  
    if(m==0)  
       return x;  
    for(i=1;i<=m;++i)//求组合数   
       x=x*(n-i+1)/i;  
    return x;  
}  
  
int main()  
{  
    int n,i;  
    __int64 a[13],sum;  
    a[1]=0;a[2]=1;  
    for(i=3;i<=12;++i)  
       a[i]=(i-1)*(a[i-1]+a[i-2]);//错排公式   
    while(scanf("%d",&n)&&n)  
    {  
        int m=n/2;  
        sum=1;  
        for(i=2;i<=m;++i)  
           sum=sum+c(n,i)*a[i];  
        printf("%I64d\n",sum);  
    }  
    return 0;  
}  



附上自己的错误答案

#include<stdio.h>
int main()
{
	__int64 s[30];
	__int64 a[30],c;
	int i,m;
	a[0]=1;
	for(i=1;i<=25;i++)
	a[i]=a[i-1]*i;
	s[1]=1;
	s[2]=1;
	for(i=3;i<=25;i++)
	s[i]=(i-1)*(s[i-2]+s[i-1]);
	while(scanf("%d",&m),m){
		if(m%2) c=a[m]/a[m-m/2]/a[m/2+1]*s[m/2+1];
		else c=a[m]/a[m/2+1]/a[m/2]*s[m/2];
		printf("%I64d\n",c);
	}
	return 0;
}