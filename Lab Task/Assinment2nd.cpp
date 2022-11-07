#include<iostream>
using namespace std;
int main()
{
    int arr[3][6];
    int n,count=0;
    cout<<"Input The Elements Of The Array: ";
    for(int row=0; row<3; row++)
        for(int col=0; col<6; col++)
            cin>>arr[row][col];

    cout<<"Array is: "<<endl;


    for(int row=0; row<3; row++)
    {
        for(int col=0; col<6; col++)
        {
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Enter Desire Element: "<<endl;

    cin>>n;
    for(int row=0; row<3; row++)

        for(int col=0; col<6; col++)
        {
            if(arr[row][col]==n)
            {
                cout<<"Index [ "<<row<<" ][ "<<col<<" ]"<<endl;
                count=1;
                break;
            }
        }
    if(count==0)
    {

     cout<<"Element Not Found!";
    }
    return 0;
}

