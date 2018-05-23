加菲尔德有三堆的球，每一堆都有独特的颜色：黄色，蓝色和红色。现在我们也知道加菲尔德有黄色的球，蓝色的球，和红色的球。  
但加菲尔德只是想换一种颜色的球。当他把两个不同颜色的球球一起，并改变其颜色自动到其余的颜色。例如，当加菲尔德把一个红色和黄色的一起，两球 立即拥有蓝色，其他情况相同。但当球有相同颜色的时候，规则就不工作了。
加菲尔德是无法估计的最小步骤，以达到目标。你能告诉他吗？
所以，需要找规律，任意两球个数相等 即为余下的步骤数；若两球差  刚好是3的倍数，那么，刚好能转化完，步骤数为二者中较大的那个数，当然还要用到快排~

#include<stdio.h>
#include<algorithm>
using namespace std;
int main()  
{  
    int a[3];  
    while(scanf("%d%d%d",&a[0],&a[1],&a[2])!=EOF)  
    {  
        sort(a,a+3);  
        if(a[0]==a[1]||(a[1]-a[0])%3==0)  
        {  
            printf("%d\n",a[1]);  
        }  
        else if(a[1]==a[2]||(a[2]-a[0])%3==0||(a[2]-a[1])%3==0)  
        {  
            printf("%d\n",a[2]);  
        }  
        else  
            printf("):\n");    
    }  
    return 0;  
} 


下面是自个写的

#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int y,b,r;
	int s[3];
	while(scanf("%d%d%d",&s[0],&s[1],&s[2])!=EOF)
	{
		sort(s,s+3);
		if(s[0] == s[1])
		printf("%d\n",s[0]);
		else if(s[1] == s[2])
		printf("%d\n",s[1]);
		else if((s[1] -s[0]) % 3 == 0)
		printf("%d\n",s[1]);
		else if((s[2] - s[0]) % 3 == 0 || (s[2] - s[1]) %3 == 0)
		printf("%d\n",s[2]);
		else printf("):\n");
	}
	return 0;
} 