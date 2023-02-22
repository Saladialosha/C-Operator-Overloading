// operator overloading using friend function and unary
#include<iostream>
using namespace std;
class NOT
{
	int a;
	public:
		NOT()
		{
			a = 5;
		}
		show()
		{
			cout<<" a ="<<a<<endl;
		}
		friend void operator!(NOT &);
		};
		void operator!(NOT &d)
		{
			d.a!=d.a;
		}
		main()
		{
			NOT n;
			n.show();
			!n;
			n.show();
		}

