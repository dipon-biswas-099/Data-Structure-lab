
#include<iostream>
using namespace std;

int main()
{

    int a;

    cin>>a;

    int arr1[a],arr2[50];
    for(int i = 0; i<a; i++)
        {
        cin>>arr1[i];
        arr2[i] = -1;
        }

int count;
    for(int i = 0; i<a; i++)
            {
    count = 1;
    for(int j = i+1; j<a; j++){
        if(arr1[i] == arr1[j]){
            count++;
            arr2[j] = 0;
            }
        }

        if(arr2[i] != 0) arr2[i] = count;
    }

    for(int i = 0; i<a;i++)
        {
        if(arr2[i] != 0)
            cout<<arr1[i]<<" Occurs "<<arr2[i]<<" times "<<endl;
        }

}
