#include<iostream>
using namespace std;

int main()
{
    int iNo=0;
    cout<<"Enter the number : "<<endl;
    cin>>iNo;
    if(iNo%2==0)
    {
        cout<<iNo<<" is an even number."<<endl;
    }
    else
    {
        cout<<iNo<<" is an odd number."<<endl;
    }

    return 0;
}