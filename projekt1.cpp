#include <iostream>

using namespace std;

int factorial(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}

void isPrime(int n) {
    int cnt = 0;

    if (n <= 1)
        cout << n << " is NOT prime" << endl;
    else {

        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                cnt++;
        }

        if (cnt > 2)
            cout << n << " is NOT prime" << endl;

        else
            cout << n << " is prime" << endl;
    }
}


int main()
{
    int n = 5;
    cout << "Enter a number...";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;

    cout << "Enter a number...";
    cin >> n;
    isPrime(n);

    return 0;
}