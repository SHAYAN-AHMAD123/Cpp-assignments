#include <iostream>
#include <string>
using namespace std;
class book{
	private:
		string name;
		int pages;
		float price;
	public:
		book(string n, int p, float price)
		{
//			this keyword is used for describing the values to the constructor
//			it describe that name is variable while n is the member of constructor
//			we also write this-> = *this because it is pointer variable for property
			this->name=n;
			this->pages=p;
			this->price=price;
		}
		void info()
		{
			cout<<" BOOK NAME IS : "<<name<<endl;
			cout<<" TOTAL PAGES IN BOOK ARE : "<<pages<<endl;
			cout<<" PRICE OF BOOK IS : "<<price<<endl;
		}
};
	int main()
	{
		book b1("OBJECT ORIENTED PROGRAMMING ",200,1000);
		b1.info();
		
		cout<<endl;
		
//		this is copy constructor we copy b1 to b2 . as a parameter b2(b1)
		book b2(b1);
		b2.info();
		
			cout<<endl;
//		this is also copy constructor we copy b2 into b3 using "=" operator. b3=b2.
		book b3=b2;
		b3.info();
		return 0;
		
	}
