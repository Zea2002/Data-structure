#include <bits/stdc++.h>
using namespace std;

int sumDigitsUntilConverged(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main() {
    vector<int> numbers(5);
    int totalSum = 0;

    cout << "Enter 5 positive integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
        totalSum += numbers[i];
    }

    int result = sumDigitsUntilConverged(totalSum);

    cout << "\nThe sum of the digits of the total sum (" << totalSum << ") converged to: " << result << endl;

    return 0;
}
