#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	string s[n],c;
	int i,j;
	for(i=0;i<n;i++)
	{
		getline(cin,s[i]);
	}
	
	for(i=0;i<n-1;i++)r
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				c=s[i];
				s[i]=s[j];
				s[j]=c;
				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}
}
