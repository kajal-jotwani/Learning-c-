#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin >> n;

    int i = 1;
int toprint=1;
   while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << toprint<< " ";
            toprint=toprint+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
  
}