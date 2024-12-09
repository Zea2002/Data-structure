#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    vector<int> arr;
    int top;
    int capacity;

public:
    Stack(int cap) {
        capacity = cap;
        top = -1;
        arr.resize(capacity);
    }

    bool isFull() {
        return top == capacity - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow! Cannot push " << value << ".\n";
        } else {
            arr[++top] = value;
            cout << "Pushed " << value << " into the stack.\n";
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop.\n";
        } else {
            cout << "Popped " << arr[top--] << " from the stack.\n";
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;
        } else {
            return arr[top];
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack contents: ";
            for (int i = 0; i <= top; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int size, choice, value;
    cout << "Enter the capacity of the stack: ";
    cin >> size;

    Stack stack(size);

    do {
        cout << "\nChoose an operation:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value);
                break;

            case 2:
                stack.pop();
                break;

            case 3:
                cout << "Top of the stack: " << stack.peek() << endl;
                break;

            case 4:
                stack.display();
                break;

            case 5:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
