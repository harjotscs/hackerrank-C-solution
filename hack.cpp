#include<iostream>
using namespace std;

int main()
{
    int a[5],s=0,b[5],m=0,sm=0;
    int i,l=0;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        s=s+a[i];
    }
    
    m=s;
	
    for(i=0;i<5;i++)
    {
        m=m-a[i];
        b[i]=m;
        m=s;     
    }
    l=b[0];
    sm=b[0];
    for(i=1;i<5;i++)
    {
        if(b[i]>l)
        {
            l=b[i];
        }
        if(b[i]<sm)
        {
            sm=b[i];
        }
    }
    
    cout<<sm<<" "<<l;

    
}
