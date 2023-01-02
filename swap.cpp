#include<iostream>
using namespace std;
void swap(int a ,int b)
{
    int temp ;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
    
}
void swap2( int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;
}
void withxor(int a, int b)
{
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int a,b;
    cout<<" enter 1= ";
    cin>>a;
    cout<<" enter 2= ";
    cin>>b;
    withxor(a,b);
    return 0;
}