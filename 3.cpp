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
		friend space operator-(space &);
		
};
space operator-(space &w)
		{
			space q;
			q.x=-w.x;
			q.y=-w.y;
			q.z=-w.z;
			return q;
		}
main()
{
	space obj1 , obj2;
	obj1.getdata(10,20,40);
	obj1.display();
	obj2=-obj1;
	obj2.display();
}
