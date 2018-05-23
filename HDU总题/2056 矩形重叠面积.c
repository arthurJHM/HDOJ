需要判断是否重叠之类的问题
下面的方法是比较省事的  也是现在为止找到的最可以的方法

作图也可以做出来的


#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	double x[4],y[4];
	double x1,x2,x3,x4,y1,y2,y3,y4;
	double h,l;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF)
	{
		x[0]=x1;x[1]=x2;x[2]=x3;x[3]=x4;
		y[0]=y1;y[1]=y2;y[2]=y3;y[3]=y4;
		sort(y,y+4);
		sort(x,x+4);
		h=fabs(x2-x1)+fabs(x4-x3)-(x[3]-x[0]);
		l=fabs(y2-y1)+fabs(y4-y3)-(y[3]-y[0]);
		printf(h<0||l<0?"0.00\n":"%.2lf\n",h*l);
	}
	return 0;
}




Problem Description
Given two rectangles and the coordinates of two points on the diagonals of each rectangle,you have to calculate the area of the intersected part of two rectangles. its sides are parallel to OX and OY .
 

Input
Input The first line of input is 8 positive numbers which indicate the coordinates of four points that must be on each diagonal.The 8 numbers are x1,y1,x2,y2,x3,y3,x4,y4.That means the two points on the first rectangle are(x1,y1),(x2,y2);the other two points on the second rectangle are (x3,y3),(x4,y4).
 

Output
Output For each case output the area of their intersected part in a single line.accurate up to 2 decimal places.
 

Sample Input
1.00 1.00 3.00 3.00 2.00 2.00 4.00 4.00
5.00 5.00 13.00 13.00 4.00 4.00 12.50 12.50
 

Sample Output
1.00
56.25
 




//另一种略微麻烦的方法


题目大意：求两个矩形相交的面积，矩形的边均平行于坐标轴。
我的想法是把矩形的八个x坐标和y坐标分别排序，然后相加的小矩形的四个顶点一定是排序后的中间值。
另外还有判断一下是否相交。
AC代码：
[html] view plain copy 在CODE上查看代码片派生到我的代码片
#include <iostream>  
#include <cstdlib>  
#include <cstdio>  
#include <algorithm>  
  
using namespace std;  
  
double x[4], y[4];  
  
inline bool judge(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {  
        if (x1 <= x3 && x1 <= x4 && x2 <= x3 && x2 <= x4) return true;  
        else if (x3 <= x1 && x3 <= x2 && x4 <= x1 && x4 <= x2) return true;  
        else if (y1 <= y3 && y1 <= y4 && y2 <= y3 && y2 <= y4) return true;  
        else if (y3 <= y1 && y3 <= y2 && y4 <= y1 && y4 <= y2) return true;  
        else return false;  
}  
  
inline void comp_x(double x1, double x2, double x3, double x4) {  
        x[0] = x1, x[1] = x2, x[2] = x3, x[3] = x4;  
        sort(x, x+4);  
        return ;  
}  
  
inline void comp_y(double y1, double y2, double y3, double y4) {  
        y[0] = y1, y[1] = y2, y[2] = y3, y[3] = y4;  
        sort(y, y+4);  
        return ;  
}  
  
int main() {  
        double x1, y1, x2, y2, x3, y3, x4, y4;  
  
        while (~scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4)) {  
                if (judge(x1, y1, x2, y2, x3, y3, x4, y4)) {  
                        printf("0.00\n");  
                } else {  
                        comp_x(x1, x2, x3, x4);  
                        comp_y(y1, y2, y3, y4);  
                        printf("%.2lf\n", (x[2]-x[1])*(y[2]-y[1]));  
                }  
        }  
        return 0;  
}  












//较第二种来讲 略微简单一些的方法


Problem Description
Given two rectangles and the coordinates of two points on the diagonals of each rectangle,you have to calculate the area of the intersected part of two rectangles. its sides are parallel to OX and OY .
 

Input
Input The first line of input is 8 positive numbers which indicate the coordinates of four points that must be on each diagonal.The 8 numbers are x1,y1,x2,y2,x3,y3,x4,y4.That means the two points on the first rectangle are(x1,y1),(x2,y2);the other two points on the second rectangle are (x3,y3),(x4,y4).
 

Output
Output For each case output the area of their intersected part in a single line.accurate up to 2 decimal places.
 

Sample Input
1.00 1.00 3.00 3.00 2.00 2.00 4.00 4.00 5.00 5.00 13.00 13.00 4.00 4.00 12.50 12.50
 

Sample Output
1.00 56.25
 
 
代码
#include<stdio.h>
double max(double a,double b)
{
 if(a>b)
  return a;
 else
  return b;
}
double min(double a,double b)
{
 if(a<b)
  return a;
 else
  return b;
}
int main()
{
   double x1,y1,x2,y2,x3,y3,x4,y4,t;
   while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF)
   {
   if(x1>x2)
   {t=x1;x1=x2;x2=t;}
   if(y1>y2)
   {t=y1;y1=y2;y2=t;}
   if(x3>x4)
   {t=x3;x3=x4;x4=t;}
   if(y3>y4)
   {t=y3;y3=y4;y4=t;}
   x1=max(x1,x3);
   y1=max(y1,y3);
   x2=min(x2,x4);
   y2=min(y2,y4);
   printf("%.2lf\n",x1>x2||y1>y2?0:(x2-x1)*(y2-y1));
   }
   return 0;
}
分析：
一开始的分区讨论着实很费劲，代码也十分繁琐，没有仔细去做图考虑，各种情况两矩形相交时交点坐标的特点，其实从作图分析可知若两矩形相交相交两交点坐标应该是上述代码中的（x1,y1） (x2,y2)，并且满足x2>x1 y2>y1，反之则两矩形不想交面积为0，这仅是一种简单做法....





