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
			//Ҫ�������Ź��� 
			setQues(ques);
			//�����Ų��ֵĳ�ʼ�� 
			init(ques);
			
			return ques;
		}
		
		solve (void)
		{
			
		}
		
	
		string ques;//��Ŀ 
		
		string fu;//����� 
		
		int num[100];//���� 
		//�����ŵĳ�ʼ�� 
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
		//�����ż��� 
		string count(string ques)
		{
			while(fu.find('/',0))
			{
				
			} 
		}
}; 
