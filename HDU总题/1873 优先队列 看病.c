#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<queue>
using namespace std;
struct Patient
{
	int priority,key;
	friend bool operator < (Patient P1,Patient P2)
	{
		if(P1.priority == P2.priority)
		return P1.key > P2.key;
		else return P1.priority < P2.priority;
	}
}patient[2001];
int main()
{
	int m,n,i,k,who;
	char type[4];
	while(scanf("%d",&m)!=EOF)
	{
		k = 1;
		priority_queue<Patient> doctor1;
		priority_queue<Patient> doctor2;
		priority_queue<Patient> doctor3;
		while(m--)
		{
			scanf("%s",&type);
			if(strcmp(type,"IN") == 0)
			{
				scanf("%d%d",&who,&patient[k].priority);
				patient[k].key = k;
				if(who == 1)
				doctor1.push(patient[k]);
				if(who == 2)
				doctor2.push(patient[k]);
				if(who == 3)
				doctor3.push(patient[k]);
				k++;
			}
			if(strcmp(type,"OUT") == 0)
			{
				scanf("%d",&who);
				if(who == 1)
				{
					if(doctor1.empty())
					{
						printf("EMPTY\n");
					}
					else 
					{
						printf("%d\n",doctor1.top().key);
						doctor1.pop();
					}
				}
				if(who == 2)
				{
					if(doctor2.empty())
					printf("EMPTY\n");
					else
					{
						printf("%d\n",doctor2.top().key);
						doctor2.pop();
					}
				}
				if(who == 3)
				{
					if(doctor3.empty())
					printf("EMPTY\n");
					else
					{
						printf("%d\n",doctor3.top().key);
						doctor3.pop();
					}
				}
			}
		}
	}
	return 0;
}





另附 别人博客的内容  是一样 的  就是多了一些注释



/********************************* 
 *    日期：2013-3-16
 *    作者：SJF0115 
 *    题号: HDU 题目1873: 看病要排队
 *    来源：http://acm.hdu.edu.cn/showproblem.php?pid=1873
 *    结果：AC 
 *    来源：2008浙大研究生复试热身赛（2）——全真模拟
 *    总结： 
**********************************/
#include<iostream>
#include<stdio.h>
#include<queue>
#include<string.h>
using namespace std;

struct Patient  
{  
	//值
    int priority;
	//编号
    int key;  
    //重载操作符
    friend bool operator < (Patient p1,Patient p2)  
    {    
        if(p1.priority != p2.priority){
			return p1.priority < p2.priority;
		}
		else{
			return p1.key > p2.key;
		}
    }
};

int main(){
	int i,N,k;
	char Type[4];
	int DoctorID,PatientID;
	Patient patient[2001];
	while(scanf("%d",&N) != EOF){
		//定义三个医生
		priority_queue<Patient> Doctor1;
		priority_queue<Patient> Doctor2;
		priority_queue<Patient> Doctor3;
		k = 1;
		while(N--){
			scanf("%s",Type);
			//诊治
			if(strcmp(Type,"IN") == 0){
				//输入病人和医生
				patient[k].key = k;
				scanf("%d %d",&DoctorID,&patient[k].priority);
				//排队
				if(DoctorID == 1){
					Doctor1.push(patient[k]);
				}
				else if(DoctorID == 2){
					Doctor2.push(patient[k]);
				}
				else{
					Doctor3.push(patient[k]);
				}
				k++;
			}
			//出院
			else if(strcmp(Type,"OUT") == 0){
				//医生DoctorID进行了一次诊治，诊治完毕后，病人出院
				scanf("%d",&DoctorID);
				//医生1
				if(DoctorID == 1){
					if(Doctor1.empty()){
						printf("EMPTY\n");
					}
					else{
						printf("%d\n",Doctor1.top().key);
						//出院
						Doctor1.pop();
					}
				}
				//医生2
				else if(DoctorID == 2){
					if(Doctor2.empty()){
						printf("EMPTY\n");
					}
					else{
						printf("%d\n",Doctor2.top().key);
						//出院
						Doctor2.pop();
					}
				}
				//医生3
				else{
					if(Doctor3.empty()){
						printf("EMPTY\n");
					}
					else{
						printf("%d\n",Doctor3.top().key);
						//出院
						Doctor3.pop();
					}
				}
			}
		}
	}
	return 0;
}
