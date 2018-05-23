#include<stdio.h>
int main()
{
	char a;
	int b,i;
	bool k=0;
	while(scanf("%c",&a),a!='@')
	{
		b=0;
		scanf("%d",&b);
		getchar();
		if(k)printf("\n");
		k=1;
	
		for(i=0;i<b-1;i++)
		{
			if(i==0)printf("%*c\n",b-i,a);
			else printf("%*c%*c\n",b-i,a,2*i,a);
		}
		for(i=1;i<2*b;i++)
		printf("%c",a);
		printf("\n");
	}
	return 0;
}