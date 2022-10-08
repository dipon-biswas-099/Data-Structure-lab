#include<iostream>
using namespace std;


    struct Employee{
        string id,dep_name;
        int year;
        double salary;

    };


int main()

    {
        int n=10;
        struct Employee details[n];

        for(int i=0; i<n; i++)

        {
            cout<<"Enter id : ";
            cin>>details[i].id;

            cout<<"Enter dep. : ";
            cin>>details[i].dep_name;

            cout<<"Enter year : ";
            cin>>details[i].year;

        cout<<"Enter salary : ";
        cin>>details[i].salary;
        cout<<endl;

    }
    cout<<"Those ID  which are all follow the conditions : ";

            for(int i=0; i<n; i++)
    {
        if(details[i].year<2009 && details[i].salary>20000)
        {
            cout<<details[i].id<<" ";
        }
    }
}
