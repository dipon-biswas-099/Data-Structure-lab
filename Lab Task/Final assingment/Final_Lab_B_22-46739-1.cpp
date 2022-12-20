#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
};

Node* add_After_Posfix(Node* head, int data, int position){

    Node* new_Node = new Node();
    Node* ptr = head;
    Node* temp = new Node();
    new_Node->next = NULL;
    new_Node->prev = NULL;
    new_Node->data = data;

    while(position != 1){
        ptr = ptr->next;
        position--;
    }

    temp = ptr->next;
    ptr->next = new_Node;
    temp->prev = new_Node;
    new_Node->next = temp;
    new_Node->prev = ptr;
    return head;
}

Node* get_Mid_Node(Node* head){


        Node* temp = head;
        int length = 0;

        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        int mid = length/2;
        temp = head;

        while (mid-- > 1)
            temp = temp->next;

        return temp;
}

Node* D_to_BST(Node* head){
    Node* root = get_Mid_Node(head);
    Node* left = head;
    Node* right = root->next;

    if(root->prev != NULL){
        root->prev->next = NULL;
    }

    root->prev = root->next = right = NULL;
    root->prev = D_to_BST(left);
    root->next = D_to_BST(right);

    return root;
}

 void pre_Order(Node* r){
        if(r == NULL)
            return;
        cout<<r->data<<" ";
        pre_Order(r->prev);
        pre_Order(r->next);
    }

    void in_Order(Node* r){
        if(r == NULL)
            return;
        in_Order(r->prev);
        cout<<r->data<<" ";
        in_Order(r->next);
    }

    void post_Order(Node* r){
        if(r == NULL)
            return;
        post_Order(r->prev);
        post_Order(r->next);
        cout<<r->data<<" ";
    }

void Doubly_Linked_Sort(Node *head)
{
    int Swap, i;
    Node *ptr;
    Node *temp = NULL;

    if (head == NULL)
        return;

    do
    {
        Swap = 0;
        ptr = head;

        while (ptr->next != temp)
        {
            if (ptr->data > ptr->next->data)
            {
                swap(ptr->data, ptr->next->data);
                Swap = 1;
            }
            ptr = ptr->next;
        }
        temp = ptr;
    }
    while (Swap);
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
    cout<<endl;

    second->data = 2;
    second->prev = head;
    second->next = third;
    cout<<endl;

    third->data = 3;
    third->prev = second;
    third->next = NULL;

    display(head);
    cout<<endl;
    head = add_After_Posfix(head,6,2);
    head = add_After_Posfix(head,7,2);
    head = add_After_Posfix(head,8,2);
    Doubly_Linked_Sort(head);
    display(head);

    Node* root = D_to_BST(head);
    pre_Order(root);

}
