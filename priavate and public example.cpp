#include <iostream>
using namespace std;
class marks{
	private:
		int a,b,c;
	public:
		void in(){
			cout<<" ENTER MARKS IN SUBJECT A : ";
			cin>>a;
			cout<<" ENTER MARKS IN SUBJECT B : ";
			cin>>b;
			cout<<" ENTER MARKS IN SUBJECT C : ";
			cin>>c;
		}
	
		int sum()
		{		
			cout<<" SUM OF NUMBERS ARE : "<<a+b+c<<endl;
		}
		float avg()
		{
			cout<<" AVERAGE OF NUMBERS IS : "<<(a+b+c)/3<<endl;
		}
};
	int main()
	{
		marks s1;
		s1.in();
		s1.sum();
		s1.avg();
		return 0;
	}
