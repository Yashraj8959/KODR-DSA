#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this-> next = nullptr;
    }
};

void insertAtFront(Node* &head, int data){
    // Node* curr = head;
    Node* newnode = new Node(data);
    newnode->next =head;
    head = newnode;

}

void insertAtEnd(Node* &head ,int data){
    Node* newnode = new Node(data);
    if (head==nullptr)
    {
        head = newnode;
    }
    Node* current = head;
    while (current->next != nullptr)
    {
        current = current-> next;
    }
    current->next = newnode;
    
}

void print(Node* head){
    Node* curr = head;
    while (curr != nullptr)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
cout<<endl;
    
}

int main()
{
    Node* head = nullptr;
    // Node* newnode = new Node(10);
    insertAtFront(head,20);
    print(head);
    insertAtFront(head,30);
    insertAtFront(head,40);
    insertAtFront(head,50);
    insertAtFront(head,70);
    print(head);
    insertAtEnd(head,10);
    print(head);
 return 0;
}