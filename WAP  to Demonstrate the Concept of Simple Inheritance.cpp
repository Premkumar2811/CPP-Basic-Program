#include<iostream>
using namespace std;
class parent
{
public:
	int a;
	int b;
	void getdata()
	{
		cout<<"Enter the Value of a : ";
		cin>>a;
		cout<<"Enter the Value of b : ";
		cin>>b;
	}
		void display()
			{
				cout<<a<<endl;
				cout<<b<<endl;
			}
};
				class child : public parent
				{
public:
				void calculation()
				{
					cout<<"Addition is : "<<a+b<<endl;
				}
};
					int main()
{
							child c1;
							c1.getdata();
							c1.display();
							c1.calculation();
 return 0;
} 

