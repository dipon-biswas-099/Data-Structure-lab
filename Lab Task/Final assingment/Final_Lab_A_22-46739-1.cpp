#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
};



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

void delete_Head(Node** head){
      if(*head != NULL) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        (*head)->prev = NULL;
      }
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

void deleteLast(Node** head){
      if(*head != NULL) {
        if((*head)->next == NULL) {
          *head = NULL;
        } else {
          Node* temp = *head;
          while(temp->next->next != NULL)
            temp = temp->next;
          Node* lastNode = temp->next;
          temp->next = NULL;
          free(lastNode);
        }
      }
    }

Node* addAfterNode(Node* head, int data, int position){
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

void deleteAtPos(Node** head,int pos)
{
    Node *temp;
    temp = *head;
    for(int i=1; i<pos && temp !=NULL; i++)
    {
        temp = temp->next;
    }

    if(pos == 1)
    {
        delete_Head((head));
    }
    else if(temp->next == NULL)
    {
        deleteLast((head));
    }
    else if(temp != NULL)
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        free(temp);
    }

}

void addAtMid(Node** head, int data)
{
    if (*head == NULL)
        return;
    else {

        Node* newNode = new Node();
        newNode->next = NULL;
        newNode->prev = NULL;
        newNode->data = data;
        Node* temp = *head;
        int length = 0;

        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        int mid = length/2;
        temp = *head;

        while (mid-- > 1)
            temp = temp->next;

        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
    }
}

void deleteAtMid(Node** head)
{
    if (*head == NULL)
        return;
    else {
        Node* temp = *head;
        int length = 0;

        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        int mid = length/2;
        temp = *head;

        while (mid-- > 1)
            temp = temp->next;

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}

void DoublyLinkedSort(Node *head)
{
    int swapped, i;
    Node *ptr;
    Node *temp = NULL;

    if (head == NULL)
        return;

    do
    {
        swapped = 0;
        ptr = head;

        while (ptr->next != temp)
        {
            if (ptr->data > ptr->next->data)
            {
                swap(ptr->data, ptr->next->data);
                swapped = 1;
            }
            ptr = ptr->next;
        }
        temp = ptr;
    }
    while (swapped);
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

    head->data = 11;
    head->prev = NULL;
    head->next = second;

    second->data = 15;
    second->prev = head;
    second->next = third;

    third->data = 12;
    third->prev = second;
    third->next = NULL;

    cout<<"UnSorted List is = ";
    display(head);
    cout<<endl;
    DoublyLinkedSort(head);
    cout<<"Sorted List is = ";
    display(head);
    cout<<endl;
    head = addAfterNode(head,6,2);
    cout<<"Adding the value of the Node after given Position : ";
    display(head);
    cout<<endl;
    addAtLast(head,5);
    cout<<"Adding the value of the Node at Last : ";
    display(head);
    cout<<endl;
    addAtMid(&head,8);
    addAtMid(&head,10);
    cout<<"Adding the value of the  Node at Middle = ";
    display(head);
    cout<<endl;
    cout<<"UnSorted List is = ";
    display(head);
    cout<<endl;
    DoublyLinkedSort(head);
    cout<<"Sorted List is = ";
    display(head);
    cout<<endl;
    delete_Head(&head);
    cout<<"Deleting the Head of the Node : ";
    display(head);
    cout<<endl;
    deleteLast(&head);
    cout<<"Deleting The Last value of Node = ";
    display(head);
    cout<<endl;
    deleteAtPos(&head,2);
    cout<<"Deleting Node at Given Position = ";
    display(head);
    cout<<endl;
    deleteAtMid(&head);
    cout<<"Deleting Node at Middle : ";
    display(head);


}
