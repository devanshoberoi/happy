#include<iostream>
using namespace std;

int main()
{
    int i,j,sum=1,n;
    cout<<"Enter rows = ";
    cin>>n;
    for(i=1;i<=2*n-1;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(i=1;i<n;i++)
    {
        for ( j=1; j<=n-i; j++)
        {
            cout<<"*";
        }
        for( j=1;j<=2*i-1;j++ )
        {
        cout<<" ";
        }
        for( j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
     for(i=n;i>=0;i--)
    {
        for ( j=0; j<n-i; j++)
        {
            cout<<"*";
        }
        for( j=0;j<2*i-1;j++ )
        {
        cout<<" ";
        }
        for( j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=2*n-1;i++)
    {
        cout<<"*";
    }
    cout<<endl;
}