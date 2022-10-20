#include<iostream>
using namespace std;
int main ()
{
   int i, j,tem,pass=0;
   int a[10] = {10,2,0,14,43,25,18,1,5,45};
   cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         tem = a[i];
         a[i] = a[j];
         a[j] = tem;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<10; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}
