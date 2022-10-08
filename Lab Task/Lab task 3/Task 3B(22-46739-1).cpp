#include<iostream>
using namespace std;
int main(){


int n;
    int temp;
    int x;
    string arr;

    cout<<"Please enter your sentence: ";
    getline(cin,arr);


    cout<<"Your Sentence: ";



    for(int i=0; i<arr.size(); i++)
        cout<<arr[i];
        cin>>x;

    for(int i=2;i<arr.size();i+=2){
        temp=arr[i];
        arr[i]=char(temp+x);

    }


    for(int i=0;i<arr.size();i++)
        cout<<arr[i];

    return 0;
}
