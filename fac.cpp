#include<iostream>
using namespace std;

int main()
{
	int a,i;
	cin>>a;
	for(i=a-1;i>0;i--)
	{
		a=a*i;
	}
	cout<<a;
}
