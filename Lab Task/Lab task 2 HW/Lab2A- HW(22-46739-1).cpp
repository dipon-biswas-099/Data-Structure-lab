#include<iostream>
using namespace std;

int main(){


    int a[10] = {1,2,3,5,6,3,2,3,1,10};

    int b;
    int coun=0;


    cout<<"Enter A Value "<<endl;
    cin>>b;
    for(int i = 0; i<10; i++){
        if(b == a[i])
            coun++;
    }

    cout<<coun;
}
