#include <iostream>
#include <string>
using namespace std;
class person{
	private:
		string name;
		int age;
	public:
//		this is parameterized constructor. simply we passed some paramerters assign to the object.
		person(string n, int a){
//			name = n  and age=a  means that we declare that value of name for n.
		 name=n;
		 age=a;
	}
	void see()
	{
		cout<<"YOUR NAME IS : "<<name<<endl;
		cout<<" YOUR AGE IS : "<<age<<endl;
	}
};
	int main()
	{
		person p1("SHAYAN AHMAD ",20);
		p1.see();
		return 0;
	}
