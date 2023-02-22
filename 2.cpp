// operator overloading using member function and unary
#include<iostream>
using namespace std;
class space
{
	int x,y,z;
	public:
	void	getdata(int a ,int b ,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<x<<" "<<y<<" "<<z<<endl;	
		}
		void operator-()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};
main()
{
	space obj1;
	obj1.getdata(10,20,40);
	obj1.display();
	-obj1;
	obj1.display();
	
}
