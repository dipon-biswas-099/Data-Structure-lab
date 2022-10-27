#include<iostream>
using namespace std;

int stack[15];
int top =-1;

bool isEmpty(){

if ( top == -1)
    return true;
else

    return false ;

}
bool isFull(){

if(top == 14)
    return true;
else
    return false;


}

void push( int value){

if(isFull())
    cout<<"stack overflow"<<endl;
else {
    top++;
    stack [top] = value;
    cout<<"value pushed"<<endl;

}

}
void pop(){

if(isEmpty())
    cout<<"stack underflow"<<endl;
else{

    top--;
    cout<<"value poped"<<endl;
}

}
void display(){

    if(isEmpty())
        cout<<"stack is empty"<<endl;
    else{

        cout<<"stack = ";
        for( int i = top; i>=0; i--){
            cout<<stack[i]<<"";
        }
        cout<<endl;

    }




}void showtop(){

    if(isEmpty())
        cout<<"stack is empty"<<endl;
    else
        cout<<"top element = " <<stack[top];

}



int main(){

        push(7);
        push(22);
        push(67);

        push(89);
       // push(5);

       // push(6);

        push(7);
        push(45);
        push(3);
        display();





return 0;
}
