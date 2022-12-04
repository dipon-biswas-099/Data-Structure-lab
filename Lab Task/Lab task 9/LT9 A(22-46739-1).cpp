
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
};

void addAtHead(Node** head, int data){
    Node* newNode = new Node();
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    *head = newNode;
}

Node* addAsHead(Node* head, int data){
    Node* newNode = new Node();
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->data = data;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}

Node* addAtLast(Node* head, int data){
    Node* newNode = new Node();
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->data = data;

    Node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->prev = ptr;
    return head;
}

Node* addBeforePos(Node* head, int data, int position){
    position -= 1;
    Node* newNode = new Node();
    Node* ptr = head;
    Node* temp = new Node();
    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->data = data;

    while(position != 1){
        ptr = ptr->next;
        position--;
    }

    temp = ptr->next;
    ptr->next = newNode;
    temp->prev = newNode;
    newNode->next = temp;
    newNode->prev = ptr;
    return head;
}

void display(Node *n)
{
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->prev = NULL;
    head->next = second;

    second->data = 2;
    second->prev = head;
    second->next = third;

    third->data = 3;
    third->prev = second;
    third->next = NULL;

    display(head);
    cout<<endl;
    head = addBeforePos(head,6,2);
    display(head);


}
