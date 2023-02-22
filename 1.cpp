// OPERATOR OVERLOADING using member function and binary
#include<iostream>
using namespace std;
class complex
{
	float x , y ;
	public:
		complex()
		{
		}
		complex(int a , int b)
		{
			x=a;
			y=b;
		}
		void display()
		{
		cout<<x<<" "<<y<<endl;
	}
	complex operator+(complex d)
	{
		complex temp;
		temp.x=x+d.x;
		temp.y=y+d.y;
		return temp;
	}
};
main()
{
	complex obj1(30,50) , obj2(70,50) , obj3;
	obj3 = obj1+obj2;
	obj3.display();
}
