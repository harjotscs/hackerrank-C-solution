#include<iostream>
using namespace std;
int main()
{
	int a,i,j,x;
	for(i=2;i<100;i++)
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
				cout<<i<<endl;
			}
	}
	
}
