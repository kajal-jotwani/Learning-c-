#include<iostream>
using namespace std;

int main()
{
int i,n;
cout<<"enter a number";
cin>>n;

for(i=1;i<=10;i=i+1)
{
    cout<<i<<"*"<<n<<"="<<n*i<<endl;
}
return 0;
}