#include<iostream>
using namespace std;
int main()
{
	int n,d;
	cin>>n;
	n=n*3;
	int a[n],i,j,m=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				m++;
			}
			
			
		}
		
	}
//	m=m/2;
	if(m-n>0)
	{
		d=m-n;
		cout<<d/2;
	}
	else
	{
		cout<<0;
	}
    
}
