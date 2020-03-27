#include<iostream>
using namespace std;
int main()
{
	int i,j,n,s=0,a[100],m=0,x=0,y=0;
	cin>>n;
	for(i=2;i<n;i++)
	{
		x=0;
		
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				x++;
			}
		}
		
		if(x==2)
	{
		a[m]=i;
		m++;
	}
	}
		for(i=0;i<m;i++)
		{
			
				s=s+a[i];
				
				if(s==n)
				{
					y++;
				}
		}
	cout<<y;
}
