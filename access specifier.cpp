#include <iostream>
#include <string>
using namespace std;
class man{
//	 ACCESS specifier: private and public
// 	use to hide data from the user
	private :
		string name;
		int age;
	public:
		void set()
		{
			cout<<" ENTER YOUR NAME : ";
			cin>>name;
			cout<<" ENTER YOUR AGE : ";
			cin>>age;
		}
		void get()
		{
			cout<< " NAME IS : "<<name<<endl;
			cout<<" AGE IS : "<<age<<endl;
		}
};
	int main()
	{
		man m1;
		m1.set();
		m1.get();
		return 0;
	}
