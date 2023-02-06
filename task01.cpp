#include<iostream>
using namespace std;
main()
{
    string fruits[4] = {"peach","apple","guava","watermelon"};
    int price[4] = {60,70,40,30};
    string fruit_name;
    int quantity;
    cout<<"Enter Fruit Name: ";
    cin>>fruit_name;
    cout<<"Enter Quantity: ";
    cin>>quantity;
    for(int i = 0 ; i < 4 ; i++ )
    {
     if(fruits[i] == fruit_name)
        {
            cout<<"Price is "<<price[i]*quantity;
        }
    }


}