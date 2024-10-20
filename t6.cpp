#include <iostream>
using namespace std;

bool isPrime(int num);
int primorial(int n);

main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Calculate Primorial
    int product = primorial(n);

    cout << product;

}

bool isPrime(int num) {
    if (num <= 1)
    {
        return false;
    } 
    for (int x = 2; x < num; x++)
    {
        if (num % x == 0)
        {
            return false;
        }
    }
    return true;
}

int primorial(int n) {
    int product = 1; 
    int count = 0;
    int num = 2;

    while (count < n) {
        if (isPrime(num)) {
            product =product* num;
            count++;
        }
        num++;
    }
    return product;
}
