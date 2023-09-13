#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int findSmallestPrimeSum() {
    int n = 4;
    
    while (true) {
        bool found = false;
        for (int p1 = 2; p1 <= n / 2; ++p1) {
            int p2 = n - p1;
            if (isPrime(p1) && isPrime(p2)) {
                found = true;
                return n;
            }
        }
        if (!found) {
            ++n;
        }
    }
}

int main() {
    int smallestPrimeSum = findSmallestPrimeSum();
    cout << smallestPrimeSum << endl;

    for (int p1 = 2; p1 <= smallestPrimeSum / 2; ++p1) {
        int p2 = smallestPrimeSum - p1;
        if (isPrime(p1) && isPrime(p2)) {
            cout << p1 << " " << p2 << endl;
            break;
        }
    }

    return 0;
}
