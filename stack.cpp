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
            cout << endl;
        }
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;
    
    while (choice != 4)
    {
        cout << "1 Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter yout choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value);  
            break; 
            case 2:
            stack.pop();
            break;
        }
    }
}