#include <iostream>

using namespace std;

int factorial(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}


int main()
{
    int num = 5;
    cout << "Enter a number...";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}