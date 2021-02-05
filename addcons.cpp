#include<bits\stdc++.h>
using namespace std;
class add
{
	int a,b,c;
	public:
	add()
	{
		cout<<"enter two number";
		cin>>a>>b;
	}
	int getdata()
	{
		c=a+b;
		return c;
	}
	void display()
	{
		cout<<"sum of number="<<c;
	}
};
int main()
{
	add a;
	a.getdata();
	a.display();
	return 0;
}
