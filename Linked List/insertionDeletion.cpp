#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
    Node() {}
};

void insertNodeAtEnd(Node *head, int data)
{
    Node *temp = head;
    if (temp == nullptr)
    {
        temp = new Node(data);
        return;
    }
    while (temp->next)
        temp = temp->next;
    Node *newNode = new Node(data);
    temp->next = newNode;
    temp = temp->next;
    return;
}

void insertAtBegin(Node *head)
{
    // Node
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    Node *head = new Node;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        insertNodeAtEnd(head, temp);
    }
    printLL(head);
    return 0;
}