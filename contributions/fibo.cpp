#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,c=0;
	cout<<"Enter the no. of elements in the series : ";
	cin>>n;
	cout<<"Fibonacci Series upto n terms :\n";
	cout<<a<<"\t"<<b<<"\t";
	for(int i=2;i<n;i++)
	{
		c=a+b;
		cout<<c<<"\t";
		a=b;
		b=c;		
	}
	cout<<endl;
	return 0;
}
