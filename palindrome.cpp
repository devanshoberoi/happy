#include <iostream>
using namespace std;

int main()
{
    int a,n,b,sum;
    cout<<"Enter a number = ";
    cin>>n;
    sum=0;
    b=n;
    while(n>0)
    {
        a=n%10;
        sum=sum*10+a;
        n=n/10;
    }
    if(sum==b)
    {
        cout<<"it is a palindrome ";
    }
    else
    cout<<"its not a palindrome ";

}