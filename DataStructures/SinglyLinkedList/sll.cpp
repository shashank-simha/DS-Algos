#include <iostream>
#include "sll.hpp"
using namespace std;

SLL::SLL() {}

SLL::~SLL() {}

void SLL::append(int data)
{
    if(head == NULL)
    {
        try
        {
            current = new Node;
            current -> data = data;
            current -> next = NULL;
            head = current;   
            cout << "Data appended successfully" << endl;       
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            cout << "Failed to append data" << endl;
        }
    }

    else
    {
        try
        {
            newnode = new Node;
            newnode -> data = data;
            newnode -> next = NULL;
            current -> next = newnode;
            current = current -> next;
            cout << "Data appended successfully" << endl;       
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            cout << "Failed to append data" << endl;
        }
        
    }
    
}

void SLL::insert(int data, int pos)
{
    //postion starts from 1
    struct Node *trav = head;

    if(pos == 1)
    {
        try
        {
            struct Node *temp = new Node;
            temp -> data = data;
            temp -> next = head;
            head = temp;
            cout << "Data inserted successfully" << endl;    
        }

        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            cout << "Failed to insert data" << endl;
        }  
        return;  
    }

    //travers the list till the previous node
    for (int i = 1; i != pos-1; i++)
    {
        if(trav == NULL)
        {
            cout << "List has no index " << pos << endl;
            return;
        }
        trav = trav -> next;
    }

    if(trav == NULL)
    {
        cout << "List has no index " << pos << endl;
        return;
    }

    try
    {
        struct Node *temp = new Node;
        temp -> data = data;
        temp -> next = trav -> next;
        trav -> next = temp;
        cout << "Data inserted successfully" << endl;    
    }

    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        cout << "Failed to insert data" << endl;
    }
    
}

void SLL::remove(int pos)
{
    //postion starts from 1
    struct Node *trav = head;

    if(pos == 1)
    {
        try
        {
            head = head -> next;
            delete trav;
            cout << "Data removed successfully" << endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            cout << "Failed to remove data" << endl;
        }    
        return;  
    }

    //travers the list till the previous node
    for (int i = 1; i != pos-1; i++)
    {
        if(trav == NULL)
        {
            cout << "List has no index " << pos << endl;
            return;
        }
        trav = trav -> next;
    }
    
    if(trav == NULL | trav -> next == NULL)
    {
        cout << "List has no index " << pos << endl;
        return;
    }

    try
    {
        struct Node *temp = trav -> next;
        trav -> next = temp -> next;
        delete temp;
        cout << "Data removed successfully" << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        cout << "Failed to remove data" << endl;
    }
    
}

void SLL::display()
{
    struct Node *trav = head;
    cout << "The objects in the list are: ";
    while(trav != NULL)
    {
        cout << trav->data << "  ";
        trav = trav -> next;
    }
    cout << endl;
}