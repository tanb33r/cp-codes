#include <bits/stdc++.h>
using namespace std;

// Function to find the gcd of two integers
int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

// Function to check if G + x is coprime with a[i]
bool is_coprime(int gc, int x, int a) {
    return GCD(gc + x, a) == 1;
}

int main() {
    // Example input
    int a[] = {3,  5 ,4};
    int n = 6;

    // Find GCD of all elements in the array
    int gc = a[0];
    for (int i = 1; i < n; i++) {
        gc = GCD(gc, a[i]);
    }

    // Check if there is a value of x such that G + x is coprime with all elements in the array
    bool possible = false;
    for (int x = 1; x <= gc; x++) {
        bool coprime = true;
        for (int i = 0; i < n; i++) {
            if (!is_coprime(gc, x, a[i])) {
                coprime = false;
                break;
            }
        }
        if (coprime) {
            possible = true;
            break;
        }
    }

    // Print "possible" or "impossible"
    if (possible) {
        cout << "possible" << endl;
    } else {
        cout << "impossible" << endl;
    }

    return 0;
}
