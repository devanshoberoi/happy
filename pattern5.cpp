#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a;
    cout<<" Enter number of rows ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for ( j=1; j<=2*i-1; j++)
        {
            if(j>i)
            {
            a=n-j+i;
            cout<<a;
            }
            else
            {
            a=n-i+j;
            cout<<a;
            }        
        }
        cout<<endl;
    }
}