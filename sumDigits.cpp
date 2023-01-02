#include <iostream>
using namespace std;

int main() {

  int sum=0,a;
  cout<<"enter a number = ";
  cin>>a;
  while(a!=0)
  {
    sum = sum + (a%10);
    a=a/10;
  }
  cout<<sum;
  return 0;