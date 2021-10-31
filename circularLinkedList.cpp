#include <iostream>

using namespace std;

class node
{
    public:
    int data;
    node* next;
};
node* head = NULL;
node* last = NULL;

void insertInEmpty(node* head, int data)
{
    node* newNode = new node();
    head = newNode;
    newNode->data = data;
    newNode->next = head;
    last = head;
}

void AtBeg(node* head, int value)
{
    node* newNode = new node();
    newNode->data = value;
    if(head == NULL)
    {
        newNode->data = value;
        newNode->next = head;
        last = head;
    }
    else
    {
        newNode->next = head;
        head = newNode;
        
    }
}

void AtEnd(node* head, int value)
{
    // node* temp = head->next;
    node* t = head;
    while(t->next != head)
    {
        t = t->next;
    }
    node* newNode = new node();
    newNode->data = value;
    newNode->next = t->next;
    t->next = newNode;
}

void atPos(node* head, int pos, int value)
{
    node* newNode = new node();
    if(head == NULL)
    {
        head = newNode;
        newNode->data = value;
        newNode->next = head;
        return;
    }
    int p = 0;
    node* t = head;
    while(p < pos-1)
    {
        t = t->next;
        p++;
    }
    newNode->data = value;
    newNode->next = t->next;
    t->next = newNode;
}

void printList(node *head)
{
  node *t = head;
  while(t->next != head)
  {
      cout << t->data << " ";
      t = t->next;
  }
  cout << t->data << " ";
}


int main()
{
    while(1)
    {
        cout << "\n1. Insert\n";
        cout << "\n2. Display\n";
        cout << "\n3. Exit\n";
        int c;
        cout << "Enter your choice: ";
        cin >> c;
        switch(c)
        {
            case 1:
            {
                int value, pos;
                cout << "Enter the value you want to insert: ";
                cin >> value;
                cout << "Enter the position at which you want to insert: ";
                cin >> pos;
                atPos(head, pos, value);
                break;
            }
            case 2:
            {
                printList(head);
                break;
            }
            default:
            {
                cout << "\nEnter a valid choice\n";
            }
        }
    }
}