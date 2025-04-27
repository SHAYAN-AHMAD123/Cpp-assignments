#include <iostream>
#include <string>
using namespace std;
class student{
	private:
		string name;
		int marks;
	public:
		student()
		{
			name="SHAYAN";
			marks=0;
		}
		student(string n){
			this->name=n;
			cout<<"THIS IS PARAMETERIZED CONSTRUCTOR."<<endl;
			cout<<endl;
		}
		student(string name,int m): name(name),marks(m)
		{
			cout<<" THIS IS INLINE CONSTRUCTOR."<<endl;
			cout<<endl;
		}
		void see(){
			cout<<" NAME IS : "<<name<<endl;
			cout<<" MARKS ARE : "<<marks<<endl;
		}
};
	int main()
	{
		student s1;
		s1.see();
			cout<<endl;
		student s2("shayan ahmad",0);
		s2.see();
			cout<<endl;
		student s3("shayan ahmad",20);
		s3.see();
		return 0;
	}
