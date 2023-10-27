#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i; // Corrected factorial calculation
    }
    return fact;
}

int countTrailingZeros(int n)
{
    int count = 0;
    while (n % 10 == 0) // Count trailing zeros
    {
        count++;
        n /= 10;
    }
    return count;
}

int main()
{
    int num;
    cin >> num;
    int fact = factorial(num);
    int zeros = countTrailingZeros(fact);
    cout << "Number of trailing zeros in " << num << "! is: " << zeros << endl;
    return 0;
}













