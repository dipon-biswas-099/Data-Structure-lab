#include<iostream>
using namespace std;
void Raihan(int arr[],int key1,int key2){

  for(int i=key1;i<key2;i++){

   if(arr[i]%2 !=0){

    cout<<"Odd = "<<arr[i]<<endl;

   }
   /*else{
    cout<<"Odd"<<arr[i]<<endl;
   }*/

  }
}
int main(){

  int arr[11]={1,2,3,4,5,6,7,8,9,10,11};


    /*
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    */

    int key1,key2;
    cin>>key1>>key2;

    Raihan(arr,key1,key2);
}
