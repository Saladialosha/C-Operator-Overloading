// operator overloading using friend function and unary
#include<iostream>
using namespace std;
class test
{
	int a;
	public:
		test()
		{
			a = 21;	
		}
		void show()
		{
			cout<<" a ="<<a<<endl;
		}
		friend void operator++(test &,int);
};
void operator++(test &d,int)
{
	d.a++;
}
main()
{
	test obj;
	obj.show();
	obj++;
	obj.show();
}
