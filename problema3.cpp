//factor primo
#include <iostream>
using namespace std;

int main()
{

    unsigned long long n = 600851475143;
    bool isPrime = 1;
    int lastPrime = 2;

        for (int i = lastPrime; i < n; i++)
        {

                isPrime = 1;
                for (int j = 2; j < i; j++)
                {
                    if(i%j == 0)
                        isPrime = 0;
                }

                if(isPrime && (n%i == 0))
                {
                    lastPrime = i;
                    n = n / i;
                }
        }
    cout << n;
    return 0;
}
//https://euler.stephan-brumme.com/3/
