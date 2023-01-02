#include<iostream>
using namespace std;
int main()
{
    int n,sum,a;
    cin>>n;
    a=n;
    sum=0;
    // while(n>0)
    // {
    //     sum=sum+n%10;
    //     n=n/10;
    // }
    // cout<<sum<<endl;
    // sum=0;
    // for(a=n;a>0;a=a/10)
    // {
    //     sum=sum+a%10;
    // }
    // cout<<sum<<endl;
    // a=n;
    // sum=0;
    do
    {
        sum=sum+a%10;
        a=a/10;
        /* code */
    } while (a>0);
    cout<<sum;
}