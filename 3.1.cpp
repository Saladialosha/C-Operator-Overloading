// operator overloading using friend function and unary
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
	 void friend operator-(space &);
		
};
void operator-(space &w)
		{
			w.x=-w.x;
			w.y=-w.y;
			w.z=-w.z;
		}
main()
{
	space obj1;
	obj1.getdata(10,20,40);
	obj1.display();
	-obj1;
	obj1.display();
}
