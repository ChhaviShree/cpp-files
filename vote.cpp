#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<"\n";
    cin>>age;
    if(age>=18)
    {
        cout<<"YOU ARE AN ELIGIBLE CANDIDATE"<<"\n";
    }
    else if(age<18)
    {
        cout<<"YOU ARE NOT AN ELIGIBLE CANDIDATE"<<"\n";
    }
    else
    {
        cout<<"PLEASE ENTER A VALID NO";
    }
    return 0;
}