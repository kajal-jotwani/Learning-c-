#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER THE YEAR";
    cin>>n;

    if(n%400==0)
    cout<<n<<"is a leap year";
    else if(n%4==0 && n%100!=0)
   cout<<n<<"is a leap year";
    else
   cout<<n<<"is a not leap year";
}