#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
        cout<<"Input the row anc Column : ";

        cin>>a>>b;

    int arr[a][b];
        cout<<"Input an array : ";

                for(int i = 0; i < a; i++)
                    {
                    for(int j = 0; j < b; j++){
                    cin>>arr[i][j];
                    }
                }

    cout<<"Array : ";
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Transpose of the Array : "<<endl;


    for(int j = 0; j < b; j++)
        {
        for(int i = 0; i < a; i++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}
