#include <iostream>
#include <string>  

using namespace std;

class person 
{
private:
    string name; 
    int age;

public:
  
    person() 
	{
        name = "None";
        age = 0;
    }

    person(string n, int a) 
	{
        name = n;
        age = a;
    }

    person(const person &p) 
	{ 
        name = p.name;
        age = p.age;
    }

   
    void display() 
	{
        cout << "Name is: " << name << endl;
        cout << "Age is: " << age << endl;
    }
};

int main() 
{
    person p1;
    person p2("Prem Patil", 18);
    person p3(p2);

    cout << "Object P1 is..!!" << endl;
    p1.display();

    cout << "Object P2 is..!!" << endl;
    p2.display();

    cout << "Object P3 is..!!" << endl;
    p3.display();

    return 0;
}


