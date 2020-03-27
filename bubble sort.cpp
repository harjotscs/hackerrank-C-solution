#include<iostream>
using namespace std;
int main()
{
	int a[19],i,n,j,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
