#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to perform simple sieve of Eratosthenes up to x
void simpleSieve(vector<int> &primes, vector<int> &ans, int x) {
    vector<bool> isPrime(x + 1, true);
    isPrime[0] = isPrime[1] = false;

    // Mark non-prime numbers
    for (int i = 2; i <= sqrt(x); i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= x; j += i)
                isPrime[j] = false;
        }
    }

    // Collect prime numbers
    for (int i = 2; i <= x; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            ans.push_back(i);
        }
    }
}

// Function to perform segmented sieve for range [low, high]
void segmentedSieve(vector<int> &primes, vector<int> &ans, int high, int low) {
    vector<bool> segment(high - low + 1, true);

    // Mark non-prime numbers in the range
    for (int p : primes) {
        int s = low / p * p;
        if (s < low)
            s += p;

        for (int i = s; i <= high; i += p)
            segment[i - low] = false;
    }

    // Collect prime numbers in the range
    for (int i = 0; i < segment.size(); i++) {
        if (segment[i])
            ans.push_back(low + i);
    }
}

int main() {
    int n;
    cin >> n;

    int x = sqrt(n);
    vector<int> primes;
    vector<int> ans;

    // Generate primes up to sqrt(n)
    simpleSieve(primes, ans, x);

    // Generate primes in segments of size x from sqrt(n) + 1 to n
    for (int i = primes[primes.size() - 1] + 1; i <= n; i += x) {
        int high = min(i + x - 1, n);
        int low = i;
        segmentedSieve(primes, ans, high, low);
    }

    // Output all prime numbers found
    for (int i : ans)
        cout << i << ' ';
}
