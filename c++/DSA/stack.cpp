#include<iostream>
using namespace std;

class Stack {
private:
    static const int MAX_SIZE = 100; 
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; 
    }

    void Push(int value) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack is Overflow, It Cannot push more elements.\n";
            return;
        }
        arr[++top] = value;
        cout << "Pushed " << value << " into the stack.\n";
    }

    void Pop() {
        if (top < 0) {
            cout << "Stack is Underflow, It Cannot pop from an empty stack.\n";
            return;
        }
        int poppedValue = arr[top--];
        cout << "Popped " << poppedValue << " from the stack.\n";
    }

    int Top() {
        if (top < 0) {
            cout << "Stack is empty. There is no top element.\n";
            return -1; 
        }
        return arr[top];
    }

    bool IsEmpty() {
        return top < 0;
    }

    bool IsFull() {
        return top >= MAX_SIZE - 1;
    }
};

int main() {
    Stack myStack;

    myStack.Push(10);
    myStack.Push(20);
    myStack.Push(30);

    cout << "Top element is : " << myStack.Top() << endl;

    myStack.Pop();
    myStack.Pop();

    cout << "Is stack empty? " << (myStack.IsEmpty() ? "Yes" : "No") << endl;
    cout << "Is stack full? " << (myStack.IsFull() ? "Yes" : "No") << endl;

    return 0;
}
