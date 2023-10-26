#include<iostream>
using namespace std;

int sum(int m, int n)
{
    int ans=m+n;
    return ans;
}

int mul(int c, int d)
{
    int ans=c*d;
    return ans;
}
int main()
{
    int a,b;
    cout<<"ENTER TWO NUMBERS:";
    cin>>a>>b;

    cout<<sum(a,b);
    cout<<endl;
    cout<<mul(a,b);
}