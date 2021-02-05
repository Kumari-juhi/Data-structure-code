#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d,s=0;
	cout<<"enter a number :-";
	cin>>n;
	
	int m=n;
	while(n>0)
	{
		d=n%10;
		s=s+d*d*d;
		n=n/10;
	}
	if(m==s)
	cout<<"amstrung="<<s;
	else
	cout<<"not amstrong";
}
