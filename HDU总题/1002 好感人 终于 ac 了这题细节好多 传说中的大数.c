#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,len1,len2,k;
	char a1[1010],b1[1010];
	int c[1010],y[1010],a[1010],b[1010];
	scanf("%d",&n);
	getchar();
	for(k=1;k<=n;k++)
	{
		if(k!=1)printf("\n");
		memset(a1,NULL,sizeof(a1));
		memset(b1,NULL,sizeof(b1));
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		memset(y,0,sizeof(y));
		scanf("%s",a1);
		getchar();
		scanf("%s",b1);
		len1=strlen(a1);
		len2=strlen(b1);
		for(i=0;i<len1;i++)
		a[i]=a1[i]-'0';
		for(i=0;i<len2;i++)
		b[i]=b1[i]-'0';
		int q=0;
		for(i=len1-1,j=len2-1;i>=0||j>=0;i--,j--)
		{
			if(i<0)
			{
				c[q++]=(b[j]+y[q])%10;
				y[q+1]=(b[j]+y[q])/10;
			}
			if(j<0)
			{
				c[q++]=(a[i]+y[q])%10;
				y[q+1]=(a[i]+y[q])/10;
			}
			if(i>=0&&j>=0){
			c[q++]=(a[i]+b[j]+y[q])%10;
			y[q+1]=(a[i]+b[j]+y[q])/10;
		}
		}
		if(y[q])
		{
		c[q]=y[q];
		q++;
		}
		printf("Case %d:\n%s + %s = ",k,a1,b1);
		for (i=q-1;i>=0;i--)
		printf("%d",c[i]);
		printf("\n");
	}
	return 0;
}