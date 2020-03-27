#include<iostream>
using namespace std;

int main()
{
	int i,j,n,d1=0,d2=0;
	cin>>n;
	int a[10][10];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		d1=d1+a[i][i];
	}
	for(i=0;i<n;i++)
	{
		d2=d2+a[i][n-i-1];
	}
	d1=d1-d2;
	if(d1<0)
	{
		cout<<(-1*(d1));
	}
	else{
		cout<<d1;
	}
}
