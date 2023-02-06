#include<iostream>
using namespace std;
main()
{
    int n,transform;
    cout<<"Enter Number Of Array Character: ";
    cin>>n;
    cout<<"Enter Number of Transformation: ";
    cin>>transform;
    int number[n];
    for(int i = 0 ; i<n ; i++)
    {
        cout<<"Enter Number: ";
        cin>>number[i];
    }
     for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0; j<transform ; j++)
        {
            if(number[i]%2 == 0)
            {
                number[i] = number[i] - 2;
            }
            else if(number[i]%2 != 0)
            {
                number[i] = number[i] + 2;
            }
        }
    } 
    for(int i = 0 ; i<n ; i++)
    {
        cout<<number[i]<<",";
    } 
}