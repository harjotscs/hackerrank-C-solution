#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int h[n],m,j,i;
	for(i=1;i<=n;i++)
	{
		cin>>h[i];
	}
	cin>>m;
	int b[m];
	
	for(i=1;i<=m;i++)
	{
		cin>>b[i];
	}
	int x[m]={0};
	int y[m]={0};

	for(i=1;i<=m;i++)
	{
			for(j=n;j>=1;j--)
			{
				if(b[i]<=h[j] && y[j]<j )
			{
				x[i]=j;
				y[j]=y[j]+1;
				
				
			}
			}
	}
	for(i=1;i<m;i++)
	{
		cout<<x[i]<<" ";
	}
	
}

