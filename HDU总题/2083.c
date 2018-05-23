#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,min,sum,j;
    int a[10000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        { 
            scanf("%d",&a[i]);
         }
        sum=0;
        for(i=0;i<n;i++)
        {
            sum=0;
           for(j=0;j<n;j++)
           {
               sum+=abs(a[i]-a[j]);
           }    
           if(i==0)
           min=sum;
           if(sum<min)
           min=sum;
        }
        printf("%d\n",min); 
    } 
    return 0;
}