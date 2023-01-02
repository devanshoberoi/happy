#include<iostream>
using namespace std;
int main()
{
    int a,b=0,i,c,n;
    cout<<" Enter to check if number is palindrome : ";
    cin>>n;
    a=n;
    while(n>0)
    {
        c=n%10;
        b=b*10+c;
        n=n/10;
    }
    if(b==a)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";

}