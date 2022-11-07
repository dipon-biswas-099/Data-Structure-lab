#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int sum;
    int x,y;


    cout<<"Enter 10 Elements: ";

    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    int min_sum =arr[0]+arr[1];
    for(int i=0; i<10-1; i++)

        for(int j=i+1; j<10; j++)

        {
            sum=arr[i]+arr[j];
            if(abs(min_sum)>abs(sum))
            {
                min_sum=sum;
                x=i;
                y=j;
            }
        }

    cout<<"Two Elements Index: "<<x<<" & "<<y<<endl;
    cout<<"Their Sum Close to Zero is : "<<min_sum;

}
