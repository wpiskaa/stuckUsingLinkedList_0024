#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    
    Node()
    {
        next = NULL;
    }
};

// stack class
class Stack
{
    private:
    Node *top; //Pointer to the top node of the stack

    public:
    Stack()
    {
        top = NULL ; 
    }

    int push (int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push value:" << value << endl;
        return value;
    }
    bool isEmpty()
    {
        return top == NULL;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Propped value: " << top->next << endl;
        top = top->next;
    }
    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->next << " " << endl;
                current = current->next;
            }
        }
    }
};