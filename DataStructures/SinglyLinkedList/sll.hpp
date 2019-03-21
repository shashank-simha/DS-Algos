#ifndef SLL_H
#define SLL_H

class SLL
{
private:
    struct Node
    {
        int data;
        struct Node *next;
    };
    
    struct Node *head, *current, *newnode;

public:
    SLL();
    ~SLL();
    
    void append(int data);

    void insert(int data, int pos);

    void remove(int pos);
    
    void display();

};

#endif