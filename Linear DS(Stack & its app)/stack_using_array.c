/*
 * Advantages of Stack using arrays is that it gives the best performance with less time complexity
 * But main disadvantage with this is it is having fixed size
 */

#include <stdio.h>
#define max 10
int top = -1;
int stack[max];

int is_empty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_full()
{
    if (top == max)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int n)
{
    if (is_full())
    {
        printf("Stack Overflow!!!");
    }
    else
    {
        top++;
        stack[top] = n;
    }
}

void pop()
{
    if (is_empty())
    {
        printf("Stack Underflow!!!!");
    }
    else
    {
        top--;
        printf("%d is popped out", stack[top + 1]);
    }
}

void print()
{
    if (is_empty())
    {
        printf("No elements in the stack!!!");
    }
    else
    {
        printf("The elements in the stack are: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
    }
}

int main()
{
    int choice = 0;
    do
    {
        printf("Enter the operation to be done :\n1.Push\n2.Pop\n3.Print Stack\n4.Exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Enter the Number : ");
            int n;
            scanf("%d", &n);
            push(n);
        }
        else if (choice == 2)
        {
            pop();
        }
        else if (choice == 3)
        {
            print();
        }
        printf("\n-------------------------------------------------------\n");
    } while (choice != 4);
}