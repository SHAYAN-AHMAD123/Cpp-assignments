#include <iostream>
#include <string>
using namespace std;
class  person{
	private:
		string name;
		int age;
	public:
		person(string n,int a):name(n),age(a)
		{
			cout<<" THIS IS INLINE CONSTRUCTOR."<<endl;
		}
	void see()
	{
		cout<<" YOUR NAME IS : "<<name<<endl;
		cout<<" YOUR AGE IS : "<<age<<endl;
	}
};
	int main()
	{
		person p1("SHAYAN AHMAD",20);
		p1.see();
		return 0;
	}
