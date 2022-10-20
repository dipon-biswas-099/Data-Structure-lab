
#include<iostream>
using namespace std;
int main(){

    int arr[100],eli,i,num;
    cout<<"enter the number of element : ";
    cin>>eli;

    cout<<"enter "<<eli<<" numbers"<<endl;

     for(i=0; i<=eli; i++)
     {
         cin>>arr[i];
     }
     cout<<"enter a number that you want to search to array"<<endl;
     cin>>num;

        for(i=0; i<eli;i++){

            if(arr[i]==num){
                cout<<"element found in the index : "<<i<<endl;
                break;
            }
        }
        if(num!=arr[i]){
            cout<<"this eliment not in the array";
        }


return 0;
}
