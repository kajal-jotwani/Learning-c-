#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x;
    cout<<"enter";
    cin>>x;
    int ans=0 , rem;
    while(x!=0)
    {
        rem=x%10;
        x/=10;
        ans=ans*10+rem;
    }
cout<<ans;
}