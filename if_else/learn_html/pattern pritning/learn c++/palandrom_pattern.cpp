#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n;
    cout << "ENTER A NUMBER:" ; 
    cin >> n;

    for (row = 1; row <= n; row = row + 1)
    {
        //print space
        for(col=1;col<=n-row;col=col+1)
        cout<<"  ";

        //1 to row
        for(col=1;col<=row;col=col+1)
         cout<<col<<" ";

         //row-1 to 1 
         for(col=row-1;col>=1;col=col-1)
         cout<<col<<" ";
           
        cout<<endl;
    }
}