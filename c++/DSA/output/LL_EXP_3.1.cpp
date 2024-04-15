#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteNode(Node*& head, int key) {
    Node* temp = head;
    Node* prev = nullptr;

    if (temp != nullptr && temp->data == key) {
        head = temp->next; 
        delete temp;       
        return;
    }

    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr)
        return;

    prev->next = temp->next;

    delete temp;
}

void displayList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int num_elements;

    cout << "Enter the number of elements: ";
    cin >> num_elements;

    cout << "Enter the elements:\n";
    for (int i = 0; i < num_elements; ++i) {
        int data;
        cin >> data;
        insert(head, data);
    }

    cout << "Original List: ";
    displayList(head);

    int keyToDelete;
    cout << "Enter the integer to delete: ";
    cin >> keyToDelete;
    deleteNode(head, keyToDelete);

    cout << "List after deletion of " << keyToDelete << ": ";
    displayList(head);
    
    return 0;
}
