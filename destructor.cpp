#include <iostream>
#include <string>
using namespace std;
class person{
	public:
		person()
		{
			cout<<"constructor is created."<<endl;
		}
//		this is destructor which destroy the memory 
	~person()
	{
		cout<<"CONSTRUCTOR IS DESTROYED."<<endl;
	}
};
	int main()
	{
		person p1,p2,p3;
	}
