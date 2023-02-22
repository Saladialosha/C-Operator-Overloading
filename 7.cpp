// operator overloading using friend function and binary
#include<iostream>
using namespace std;
class sum1
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
		friend sum1 operator+(sum1 s1, sum1 s2);
};
sum1 operator+(sum1 s1, sum1 s2)
{
	sum1 q;
	q.a=s1.a+s2.a;
	q.b=s1.b+s2.b;
	return q;
}
main()
{
sum1 s,t,d ;
s.setdata();
t.setdata();
d=s+t;
d.show();
}
