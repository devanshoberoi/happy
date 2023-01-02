#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a;
    cout<<"Rows = ";
    cin>>n;
    for(i=(n+1);i>1;i--)
    {
        for(j=1;j<=(n-i+1);j++)
        {
            cout<<" ";
        }
        for ( j=1; j<=2*i-1; j++)
        {
            if(j>i)
            {
            a=j-i;
            cout<<a;
            }
            else
            {
            a=i-j;
            cout<<a;
            }        
        }
        cout<<endl;
    }

    for(i=1;i<=(n+1);i++)
    {
        for(j=1;j<=(n-i+1);j++)
        {
            cout<<" ";
        }
        for ( j=1; j<=2*i-1; j++)
        {
            if(j>i)
            {
            a=j-i;
            cout<<a;
            }
            else
            {
            a=i-j;
            cout<<a;
            }        
        }
        cout<<endl;
    }
}