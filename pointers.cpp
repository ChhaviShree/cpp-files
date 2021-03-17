#include<iostream>
using namespace std;
int main()
{
    int arr[5],*p;
    cout<<"enter the elements"<<"\n";
    for(int i=0;i<5;i++)
    {
    cin>>arr[i];
    }
    p=arr;
    cout<<"Entered numbers are"<<"\n";
    for(int i=0;i<5;i++)
    {
        cout<<*p<<endl;
        p++;
    }
     return 0;
}