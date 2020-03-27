#include<iostream>
using namespace std;
int main()
{
	int n=0,a[6][6],m=0,x=0,z=0,b[16]={0},k=0,s=0,i,j,c=0;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=n;i<n+2;i++)
	{
		for(j=m;j<m+3;j++)
		{
			if(i==n)
			{
				b[z]=b[z]+a[i][j];
				++x;
				if(x==2)
				{
					c=j;
					b[z]=b[z]+a[i+1][j];
				}
			}
			if(i==n+1)
			{
				b[z]=b[z]+a[i+1][j];
			}
			++s;
			++k;
			
		}
		if(k==6)
		{
			m=c;
			x=0;
			k=0;
			++z;
			i=n;
			j=m;
		}
		if(s==24)
		{
			i=n=n+1;
			s=0;
		}
	}
	
	cout<<b[5];
}
