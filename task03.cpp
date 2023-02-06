#include<iostream>
using namespace std;
main()
{
    string fruit_name;
    int n;
    cout<<"Enter Fruit Name: ";
    cin>>fruit_name;
    n = fruit_name.length();
     if(n%2 == 0)
        {
            cout<<"TRUE";
        }
    else
    {
        cout<<"FALSE";
    }

}