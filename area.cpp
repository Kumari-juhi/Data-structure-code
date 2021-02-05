#include<iostream>
using namespace std;
main()
{
	int i,j,n,a[50];
	cout<<"enter the size of array:-";
	cin>>n;
	cout<<"enter the element :-";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"arrange in assending order :-";
		int temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[i]>=a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nafter removing dublicate element :-";
	for(i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
		cout<<a[i]<<" ";	
		}
	}
}
