// operator overloading using friend function and binary
#include<iostream>
using namespace std;
class mul1
{
	public:
		int a,b;
		void setdata()
		{
			cout<<"enter values of a and b"<<endl;
			cin>>a>>b;
		}
		void show()
		{
			cout<<a<<" "<<b<<endl;
		}
		friend mul1 operator*(mul1 m1, mul1 m2);
};
mul1 operator*(mul1 m1, mul1 m2)
{
	mul1 q;
	q.a=m1.a*m2.a;
	q.b=m1.b*m2.b;
	return q;
}
main()
{
mul1 s,t,d ;
s.setdata();
t.setdata();
d=s*t;
d.show();
}
