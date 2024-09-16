#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

// Function to create an empty linked list
Node *createLinkedList() {
    return nullptr;
}

// Function to insert a node at the beginning
void insertAtBeginning(Node *&head, int value) {
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Function to insert a node at the end
void insertAtEnd(Node *&head, int value) {
    Node *newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node *current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

// Function to insert a node before a given node
void insertBefore(Node *&head, Node *nextNode, int value) {
    if (head == nullptr || nextNode == nullptr) {
        cout<<"Cannot insert before a null node."<<endl;
        return;
    }

    if (head == nextNode) {
        insertAtBeginning(head, value);
        return;
    }

    Node *current = head;
    while (current != nullptr && current->next != nextNode) {
        current = current->next;
    }

    if (current == nullptr) {
        cout<<"The given next node is not found in the list."<<endl;
        return;
    }

    Node *newNode = new Node(value);
    newNode->next = nextNode;
    current->next = newNode;
}
// Function to delete the first node
void deleteFirstNode(Node *&head)
{
    if (head == nullptr)
    {
        cout<<"List is empty."<<endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}

// Function to delete the node before a given node
void deleteBefore(Node *&head, Node *nextNode) {
    if (head == nullptr || nextNode == nullptr) {
        cout<<"No node to delete before the given node."<<endl;
        return;
    }

    if (head->next == nextNode) {
        deleteFirstNode(head);
        return;
    }

    Node *current = head;
    while (current->next != nullptr && current->next->next != nextNode) {
        current = current->next;
    }

    if (current->next == nullptr) {
        cout<<"The given next node is not found in the list."<<endl;
        return;
    }

    Node *temp = current->next;
    current->next = nextNode;
    delete temp;
}
// Function to traverse the linked list
void traverseLinkedList(Node *head) {
    Node *current = head;
    while (current != nullptr) {
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<endl;
}

// Function to find a node in the linked list
Node *findNode(Node *head, int value) {
    Node *current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

int main() {
    Node *head = createLinkedList();

    insertAtBeginning(head, 3);
    insertAtBeginning(head, 5);
    insertAtEnd(head, 7);
    insertAtEnd(head, 9);

    cout<<"Linked List after insertions  :  ";
    traverseLinkedList(head); // Output: 5 3 7 9
    cout<<endl;

    // Find value 3
    Node *nodeToInsertBefore = findNode(head, 3);
    if (nodeToInsertBefore) {
        insertBefore(head, nodeToInsertBefore, 4);
        cout<<"Linked List after inserting (4) before (3) : ";
        traverseLinkedList(head); // Output: 5 4 3 7 9
        cout<<endl;
    }

    // Delete the number (4) that was added before the number (3).
    deleteBefore(head, nodeToInsertBefore);
    cout<<"Linked List after deleting (4) : ";
    traverseLinkedList(head); // Output: 5 3 7 9

    return 0;
}