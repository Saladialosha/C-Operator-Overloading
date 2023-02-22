// operator overloading using member function and unary (postfix)
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
	score operator++(int)
	{
		cout<<" postfix"<<endl;
		score temp;
		val=val+2;
		temp.val=val;
		return temp;
	}
};
main()
{
score s2;
s2++;
cout<<s2.show();
}
