#include <iostream>
#include <curses.h>
#include <stdlib.h>

using namespace std;

#define size 5

void pop();
void push();
void display();

struct stack
{
    int item;
    int stack[size];
} s;

int top = -1;

void push()
{
    if (top == size - 1)
    {
        cout << "\nStack is full";
    }
    else
    {
        top = top + 1;
        cout << "\n\nEnter element to push: ";
        cin >> s.item;
        s.stack[top] = s.item;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "\nStack is empty";
    }
    else
    {
        s.item = s.stack[top];
        top = top - 1;
        cout << "Deleted entry is: " << s.item;
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        cout << "\nStack is empty";
    }
    else
    {
        cout << "The stack entries are: ";
        for (i = top; i >= 0; i--)
        {
            cout << s.stack[i] << " ";
        }
    }
}

int main()
{
    int ch;

    do
    {
        cout << "\n\n1: push";
        cout << "\n2: pop";
        cout << "\n3: display";
        cout << "\n4: exit";
        cout << "\nEnter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "\nEnter a valid choice";
        }
    } while (true);

    return 0;
}