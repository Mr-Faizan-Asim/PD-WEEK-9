#include<iostream>
using namespace std;
main()
{
    
    int n,count = 0;
    int j = 10;
    cout<<"Enter Number of Inputs: ";
    cin>>n;
    int number[n];
    int num[n];
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter Number: ";
        cin>>number[i];
    }
    
    for(int i = 0 ; i < n ; i++)
    {
        
        if(number[i] == 7)
        {
            count++;
        }
       
    }
    for(int i = 0 ; i < n ; i++)
    {
           num[i] = number[i]/10;
            for(j = 10 ; j < number[i] ; j = j * 10 )
           {
            if(number[i]%j == 7 || number[i]/j == 7 || num[i]%10 == 7 || num[i]/10 == 7)
            {
                count++;
            }
            num[i] = num[i]/10;
           }
    }
    if(count >= 1)
    {
        cout<<"BOOM";
    }
    else
    {
        cout<<"NO SEVEN";
    }
     

}