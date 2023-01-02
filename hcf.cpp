#include<iostream>
using namespace std;
int main()
{
    int a,b,i,hcf;
    cout<<"number 1 = ";
    cin>>a;
    cout<<"number 2 = ";
    cin>>b;
    for(i=1;i<=a||i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    cout<<hcf;
    cout<<endl;
}

