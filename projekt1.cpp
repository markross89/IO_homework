#include <iostream>

using namespace std;

void isPrime(int n) {
    int cnt = 0;

    if (n <= 1)
        cout << n << " is NOT prime";
    else {

        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                cnt++;
        }

        if (cnt > 2)
            cout << n << " is NOT prime";

        else
            cout << n << " is prime";
    }
}


int main()
{

    return 0;
}