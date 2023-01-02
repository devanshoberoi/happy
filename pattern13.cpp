#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a;
    cout<<"Rows = ";
    cin>>n;
    for(i=n;i>=0;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for ( j=0; j<=i; j++)
        {
                cout<<i-j;
        }
        for ( j=1; j<=i; j++)
        {
                cout<<j;
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for ( j=0; j<=i; j++)
        {
                cout<<i-j;
        }
        for ( j=1; j<=i; j++)
        {
                cout<<j;
        }
        cout<<endl;
    }
}