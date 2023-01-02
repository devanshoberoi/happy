#include<iostream>
using namespace std;
 
int main()
{
    int i,j,n;
    cout<<"Enter number = ";
    cin>>n;
    j=1;
    for(i=1;i<=n;i++)
    {
        j=j*i;
        cout<<i<<"*";

    }
    cout<<"\b";

    cout<<" = "<<j;
}