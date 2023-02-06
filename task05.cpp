#include<iostream>
using namespace std;
main()
{   
    int n;
    cout<<"Enter Number of Array Character: ";
    cin>>n;
    string symbols[n];
    bool check;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter Number: ";
        cin>>symbols[i];
            for(int j = 0 ; j<i ; j++)
            {
                if(symbols[i] == symbols[j])
                {
                    check = true;
                }
                else 
                {
                    check = false;
                }
            }    
    }
    if(check == 1)
     cout<<"True";
     else
     {
        cout<<"False";
     }

}