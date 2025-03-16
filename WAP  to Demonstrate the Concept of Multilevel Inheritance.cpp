#include<iostream>
using namespace std;
class A
{
public:
int a;
void Get_a()
 	{
	cout<<"Enter the value of a :";
	cin>>a;
 	}
		 void disp_a()
		{
 			cout<<a<<endl;
		}
};
			class B : public A
			{
public:
 				int b;
				void Get_b()
 			{
 					cout<<"Enter the value of b :";
					cin>>b;
 			}
 					void disp_b()
				{
 					cout<<b<<endl;
 				}
};
				class Result : public B
				{
public:
 				void calculation()
				{
 					cout<<"Addition is :"<<a+b<<endl;
 				}
};
				int main()
{
			Result r1;
 			r1.Get_a();
 			r1.Get_b();
 			r1.disp_a();
 			r1.disp_b();
 			r1.calculation();
 return 0;
} 

