#include<iostream>
using namespace std;

class Stack {
private:
    int maxSize; 
    int top; 
    int *arr; 

public:
    Stack(int size) {
        maxSize = size;
        top = -1;
        arr = new int[maxSize];
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if (top == maxSize - 1) {
            cout << "Stack is full. Cannot push more elements.\n";
            return;
        }
        arr[++top] = value;
        cout << value << " pushed onto the stack.\n";
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty. Cannot pop elements.\n";
            return;
        }
        int poppedValue = arr[top--];
        cout << poppedValue << " popped from the stack.\n";
    }

    void topElement() {
        if (top == -1) {
            cout << "Stack is empty. No top element.\n";
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == maxSize - 1;
    }
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack myStack(size);

    int choice, element;
    cout << "How many elements do you want to push onto the stack? ";
    int pushCount;
    cin >> pushCount;

    for (int i = 0; i < pushCount; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        myStack.push(element);
    }

    do {
        cout << "\nChoose an operation:\n"
             << "1. Push\n"
             << "2. Pop\n"
             << "3. Top\n"
             << "4. IsEmpty\n"
             << "5. IsFull\n"
             << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to push: ";
                cin >> element;
                myStack.push(element);
                break;
            case 2:
                myStack.pop();
                break;
            case 3:
                myStack.topElement();
                break;
            case 4:
                cout << (myStack.isEmpty() ? "Stack is empty.\n" : "Stack is not empty.\n");
                break;
            case 5:
                cout << (myStack.isFull() ? "Stack is full.\n" : "Stack is not full.\n");
                break;
            case 0:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
