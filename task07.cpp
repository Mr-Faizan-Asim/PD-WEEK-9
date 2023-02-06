#include<iostream>
using namespace std;
main()
{
 int a1[100];
 int a2[100];
 int n1,n2;
 string arr1,arr2;
 cout<<"Enter :";
 cin>>arr1;
 n1 = arr1.length();
 cout<<"Enter :";
 cin>>arr2;
 n2 = arr2.length();
 for(int i = 0 ; i<n1 ; i++ )
 {  a1[i] = 0;
    for(int j = 0 ; j < n1 ; j++)
    {
        if(arr1[i] == arr1[j])
        {
            a1[i]++;
        }
    }
 }
 for(int i = 0 ; i<n2 ; i++ )
 {  a2[i] = 0;
    for(int j = 0 ; j < n1 ; j++)
    {
        if(arr2[i] == arr2[j])
        {
            a2[i]++;
        }
    }
 }
 
 for(int i = 0 ; i<n1 ; i++)
 {
    cout<<a1[i];
 }
 cout<<endl;
 for(int i = 0 ; i<n2 ; i++)
 {
    cout<<a2[i];
 }






}