#include<iostream>
using namespace std;
int main()
{
	int n,a,b,m,u=0;
	cin>>n;
	int d[n],i,s;
	for(i=0;i<n;i++)
	{
		cin>>d[i];
	}

	cout<<"enter element to be searched"<<endl;
	cin>>s;
	a=0;
	b=n-1;
	while(a<=b)
	{
	m=(a+b)/2;
	if(s==d[m])
	{
		cout<<s<<" found at position "<<m+1 ;
		u++;
		break;
	}
	else if(s<d[m])
	{
		b=m-1;
	}
	else
	{
		a=m+1;
	}
	
	}
/*	if(u>0)
	{
		cout<<" No. found"<<endl;
	}
	else
	{
		cout<<"Not Found"<<endl;
	}*/
}
