#include <bits/stdc++.h>
using namespace std;

bool isPalindromeString(const string& str) {
    int left = 0, right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

bool isPalindromeNumber(int num) {
    if (num < 0) return false;
    int original = num, reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int choice;
    cout << "Choose the type to check:\n";
    cout << "1. String\n";
    cout << "2. Number\n";
    cin >> choice;

    if (choice == 1) {
        string str;
        cout << "Enter a string: ";
        cin >> str;
        if (isPalindromeString(str)) {
            cout << "The string is a palindrome.\n";
        } else {
            cout << "The string is not a palindrome.\n";
        }
    } else if (choice == 2) {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (isPalindromeNumber(num)) {
            cout << "The number is a palindrome.\n";
        } else {
            cout << "The number is not a palindrome.\n";
        }
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
