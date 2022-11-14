#include <iostream>
using namespace std;

#define SIZE 5


int A[SIZE];
int front = -1;
int rear = -1;
bool isempty()
{
    if(front == -1 && rear == -1)
        return true;
    else
        return false;
}
void enqueue ( int value )
{
    if (rear == SIZE-1)
        cout<<" Queue is full   "<<endl;
    else
    {
        if( front == -1)
            front = 0;
        rear++;
        A[rear] = value;
    }
}
void dequeue ( )
{
    if( isempty() )
        cout<<"Queue is empty    ";
    else if( front == rear )
        front = rear = -1;
    else
        front++;
}
void showfront( )
{
    if( isempty())
        cout<<"Queue is empty  ";
    else
        cout<<"element at front is:"<<A[front]<<" "<<endl;
}
void displayQueue()
{
    if(isempty())
        cout<<"Queue is empty "<<endl;
    else
    {
        for( int i=front ; i<= rear ; i++)
            cout<<A[i]<<" ";
    }
}

int main()
{
    cout<<"Inserting elements in queue  ";
    enqueue(2);
    displayQueue();
    enqueue(3);
    displayQueue();
    enqueue(5);
    displayQueue();
    enqueue(7);
    displayQueue();
    enqueue(8);

    displayQueue();
    enqueue(9);
    showfront();

    cout<<"Removing elements from queue   ";
    dequeue();
    displayQueue();
    dequeue();
    displayQueue();
    dequeue();
    displayQueue();
    dequeue();
    displayQueue();
    dequeue();

    return 0;
}
