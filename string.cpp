#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2,mx,cx,s4;
	int a,b;
	getline(cin,s1);
	getline(cin,s2);
	a=s1.length();
	b=s2.length();s4=s1;
	cout<<a<<" "<<b<<endl;
	cout<<s1+s2<<endl;
	mx=s2[0];
	cout<<s1.replace(0,1,mx)<<" ";
	cx=s4[0];
	cout<<s2.replace(0,1,cx);
}
