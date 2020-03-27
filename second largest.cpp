#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,l,s,c;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	/*
	Method:-1
		l=a[0];
		s=a[1];
		if(s>l)
		{
			c=s;
			s=l;
			l=c;
		}
		
	for(i=2;i<n;i++)
	{
		if(a[i]>l)
		{
			s=l;
			l=a[i];
		}
		else if(a[i]>s)
		{
			s=a[i];
		}
	}*/
	////////////////////Method:-2///////////////////////
	l=a[0];											 //
	s=0;											//			
	for(i=0;i<n;i++)                               //
	{
		if(a[i]>l)
		{
			s=l;
			l=a[i];
		}
		if(a[i]<l && a[i]>s)
		{
			s=a[i];
		}
	}
	cout<<s;
}
