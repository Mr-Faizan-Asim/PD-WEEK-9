#include<iostream>
using namespace std;
main()
{
    int arr_size,count = 0,total;
    cout<<"Enter The Size: ";
    cin>>arr_size;
    string colors[arr_size];
    cout<<"Enter Color: ";
    cin>>colors[0];
    for(int i = 1 ; i<arr_size ; i++)
    {
        cout<<"Enter Color: ";
        cin>>colors[i];
        if(colors[i] != colors[i-1])
        {
            count++;
        }
    }
    total = (arr_size*2) + (count*1);
    cout<<"Result: "<<total;

}