/*
    *Advantages:-
      - Always constant time to push or pop the element
      - size can be increased
    *Disadvantages:-
      -Slowest of all the implementations
      -More space complexity
      -If anything was not handled properly the size will grow to infinity
*/

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
} *head = NULL, *temp, *temp_ptr;

int is_empty()
{
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push()
{
    printf("Enter the value to be inserted : ");
    int n;
    scanf("%d", &n);
    struct stack *newnode = (struct stack *)malloc(sizeof(struct stack));
    newnode->data = n;
    newnode->next = NULL;
    if (is_empty())
    {
        head = newnode;
        temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}

void pop_last()
{
    if (is_empty())
    {
        printf("The Stack is empty!!!!\n");
    }
    else
    {
        temp = head;
        while (temp->next->next != NULL)
        {
            printf("%d\n", temp);
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void pop_first()
{
    if (is_empty())
    {
        printf("The Stack is empty!!!!");
    }
    else
    {
        int data = head->data;
        temp_ptr = head;
        head = head->next;
        free(temp_ptr);
    }
}

void display()
{
    if (is_empty())
    {
        printf("The stack is empty!!!");
    }
    else
    {
        temp = head;
        printf("The Elements in the stack are: ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int choice = 0;
    do
    {
        printf("Enter the choice\n1.Push\n2.Pop First element\n3.Pop Last element\n4.Display\n5.Exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            push();
        }
        else if (choice == 2)
        {
            pop_first();
        }
        else if (choice == 3)
        {
            pop_last();
        }
        else if (choice == 4)
        {
            display();
        }
    } while (choice != 5);
}