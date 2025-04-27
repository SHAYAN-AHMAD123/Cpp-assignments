#include <iostream>
#include <string>
using namespace std;
class person{
	private:
		string name;
		int age;
	public:
		string setter(string n,int a)
		{
			name=n;
			age= a;
		}
		string getter(string n, int a)
		{
			return name;
		}
	
};
	int main()
	{
		person p1;
		cout<<p1.getter("shayan ",20)<<endl;
	}
