#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void pushData(struct Node **head, int value)
{
    struct Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
}

int main()
{

    return 0;
}