#include<iostream>
using namespace std;
main()
{
string moves[10] = {"Shimmy","Shake","Pirouette","Slide","Box Step","Headship","Dosado","Pop","Lock","Arabseque"};
int number[4],checker[4],printer;
for(int i = 0; i<4 ; i++)
{
cout<<"Number: ";
cin>>number[i];
}
for(int  i = 0 ; i < 4; i++)
    {
        checker[i] = number[i] + i;
        if(checker[i] > 9)
        {
            checker[i] = checker[i] - 10;
        }
    }
for(int i = 0 ; i<4 ; i++)
{   
    printer = checker[i];
    cout<<moves[printer]<<", ";
}

    
} 