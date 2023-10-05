#include <iostream>
using namespace std;

int main()
{
    int n, num, pow, i;
    cout << "enter a number:";
    cin >> n;
    cout << "enter the power";
    cin >> pow;

    num = n;
    for (i = 1; i < pow; i = i + 1)
    {
        num = num * n;
    }
    cout << num;
    return 0;
}