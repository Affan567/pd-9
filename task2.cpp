
#include <iostream>
using namespace std;
main()
{
    string name;
    string movie [5] = {"Gladiators","Starwars","Terminator","Takinglives","Tombrider"};
    int dis;
    cout<<"Enter movie name: ";
    cin>>name;
    if( name == movie[1] || name == movie[3] )
    {
        dis = 500 * 0.95;
    }
    else{
        dis = 500 * 0.90;
    }

    cout<<"Price after discount is "<<dis;
}