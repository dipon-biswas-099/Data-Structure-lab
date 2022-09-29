#include<iostream>
using namespace std;

int main(){
    int i,k;

    int size;
    cin>>size;
    int arr[size];
    for( i = 0; i<size; i++)
        {
        cin>>arr[i];
        }

    for( i=0;i<size; i++)

        {

        for( k=0; k<i; k++){
            if(arr[i] == arr[k
               ])

               break;
        }

        if(i == k)
            cout<<arr[i]<<" ";
    }

}
