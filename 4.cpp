// operator overloading using member function and unary (prefix)
#include<iostream>
using namespace std;
class score
{ 
int val;
public:
	score()
	{
		val=0;
	}
	int show()
	{
		return(val);
	}
	score operator++()
	{
		cout<<" prefix"<<endl;
		score temp;
		val=val+2;
		temp.val=val;
		return temp;
	}
};
main()
{
score s1;
++s1;
cout<<s1.show();
}
