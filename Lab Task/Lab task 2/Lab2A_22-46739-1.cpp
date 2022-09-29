#include<iostream>
using namespace std;

int main()
{
    int i,j ; int size1;

    cin>>size1;
    int arr1[size1];

    for( i = 0; i<size1; i++)
        {
        cin>>arr1[i];
        }

    int size2;
    cin>>size2;
    int arr2[size2];


    for( i = 0; i<size2; i++){
        cin>>arr2[i];
    }



    int arr3[100];
    j=i;

    for( i = 0;i<size1;i++)
        {
        arr3[i] = arr1[i];
        }

    for( i = 0; i<size2; i++)
        {
        arr3[j] = arr2[i];
        j++;
        }

    for( i = j; i>=0; i--)
        {
        cout<<arr3[i]<<" ";
        }

    return 0;

}
