#include<iostream>
using namespace std;
main()
{
    string movie[5] = {"Gladiator","StarWars","Terminator","TakingLives","Tomb"};
    float price = 500;
    string movie_name;
    int quantity;
    cout<<"Enter Movie Name: ";
    cin>>movie_name;
    for(int i = 0 ; i < 5 ; i++ )
    {
     if(movie[i] == movie_name)
        {
            if(i%2 == 0)
            {
                price = price - (price*0.05);
            }
            else if(i%2 != 0)
            {
                price = price - (price*0.1);
            }
            
        }
    }
    cout<<"Price = "<<price;


}