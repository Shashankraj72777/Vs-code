#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* swapNodes(ListNode* head, int k) {
    if (!head) return nullptr;

    ListNode *first = head, *second = head, *kthNodeFromEnd = nullptr;

    for (int i = 1; i < k; ++i) {
        if (!second) return head;  
        second = second->next;
    }

    kthNodeFromEnd = second;

    while (second->next) {
        first = first->next;
        second = second->next;
    }

    int temp = kthNodeFromEnd->val;
    kthNodeFromEnd->val = first->val;
    first->val = temp;

    return head;
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;
    cout << "Original List: ";
    printList(head);

    head = swapNodes(head, k);

    cout << "After swapping kth nodes: ";
    printList(head);

    return 0;
}
