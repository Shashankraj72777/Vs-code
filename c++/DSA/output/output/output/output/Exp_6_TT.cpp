#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int getLength(ListNode *head) {
    int length = 0;
    while (head != NULL) {
        length++;
        head = head->next;
    }
    return length;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int lenA = getLength(headA);
    int lenB = getLength(headB);

    while (lenA > lenB) {
        headA = headA->next;
        lenA--;
    }
    while (lenB > lenA) {
        headB = headB->next;
        lenB--;
    }

    while (headA != NULL && headB != NULL) {
        if (headA == headB) {
            return headA; 
        }
        headA = headA->next;
        headB = headB->next;
    }

    return NULL; 
}

void printList(ListNode *head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
  
    ListNode *headA = new ListNode(1);
    headA->next = new ListNode(2);
    headA->next->next = new ListNode(3);
    headA->next->next->next = new ListNode(4);
    headA->next->next->next->next = new ListNode(5);

    ListNode *headB = new ListNode(10);
    headB->next = headA->next->next->next;

    cout << "List A: ";
    printList(headA);
    cout << "List B: ";
    printList(headB);

    ListNode *intersection = getIntersectionNode(headA, headB);
    if (intersection != NULL) {
        cout << "Intersection Node Value: " << intersection->val << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    delete headA->next->next->next->next;
    delete headA->next->next->next;
    delete headA->next->next;
    delete headA->next;
    delete headA;
    delete headB;

    return 0;
}
