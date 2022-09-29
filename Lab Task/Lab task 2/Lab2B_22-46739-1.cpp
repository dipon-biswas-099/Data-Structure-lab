#include<iostream>
using namespace std;

int main()


{
    int i,j;



    int arr1[5] = {4,5,6,7,8};

    int arr2[6] = {4,3,6,6,7,9};

    int arr3[11];



    for(int i = 0; i<5; i++)

        {
        arr3[i] = arr1[i];
        }

    for(int i = 0; i<6; i++)

        {
        arr3[i] = arr2[i];
        }


    for( int i = 0; i<5; i++)
        {

        if(arr1[i] == arr2[i])
            cout<<arr3[i]<<" ";

        }



}
