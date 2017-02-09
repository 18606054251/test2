#include<iostream>
#include<string>
using namespace std;
class solve
{
	public:
		void setQues(string a)
		{
			this->ques=a;
		}
		
		string getAnswer(string ques)
		{
			//要进行括号工作 
			setQues(ques);
			//无括号部分的初始化 
			init(ques);
			
			return ques;
		}
		
		solve (void)
		{
			
		}
		
	
		string ques;//题目 
		
		string fu;//运算符 
		
		int num[100];//数字 
		//无括号的初始化 
		void init(string ques)
		{
			int fuPoint=0;
			int numPoint=1;
			int i;
			for (i=0;i<=ques.size();i++)
			{
				if (ques[i]<'0')
				{
					if (ques[i]=='*')
					{
						fu[fuPoint]='*';
						fuPoint++;
					}
					if (ques[i]=='/')
					{
						fu[fuPoint]='/';
						fuPoint++;
					}
					if (ques[i]=='+')
					{
						fu[fuPoint]='+';
						fuPoint++;
					}
					if (ques[i]=='-')
					{
						fu[fuPoint]='-';
						fuPoint++;
					}
				}
				else
				{
					if (ques[i]=='1'&&ques[i+1]=='0')
					{
						num[numPoint]=10;
						numPoint++;
						i++;
					}
					else
					{
						num[numPoint]=ques[i]-'0';
						numPoint++;
					}
					
				}
			}
		} 
		//无括号计算 
		string count(string ques)
		{
			while(fu.find('/',0))
			{
				
			} 
		}
}; 
