#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int h[n],m,j,i;
	for(i=n;i>0;i--)
	{
		cin>>h[i];
	}
	cin>>m;
	int b[m];
	
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	int x[m]={0};

	for(i=1;i<=m;i++)
	{
		if(x[i]<i)
		{
			for(j=1;j<=n;j++)
			{
				if(b[i]<=h[j])
			{
				x[i]=x[i]+1;
				break;
			}
			}
			
		}
	}
	for(i=1;i<=m;i++)
	{
		cout<<x[i];
	}
	
}

