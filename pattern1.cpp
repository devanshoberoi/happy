#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter n ";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        int a=i;
        for ( j = 1; j <= i ; j++)
        {
            
            cout<<a;
            a--;
        }
        cout<<endl;
    }   
    
}