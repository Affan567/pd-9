
#include <iostream>
using namespace std;
main()
{
    int pos = 0 ,quantity ,t_price;
    string n;
    cout<<"Enter name of the fruit: "<<endl;
    cin>>n;
    cout<<"Enter quantity of fruit: "<<endl;
    cin>>quantity;
    string fruit[4] = {"peach","apple","guava","watermelon"};
    int price [4] = {60,70,40,30};
    for (int i = 0;i<5;i++ )
    {
        if( n == fruit[i])
        {
            pos = i;
            break;
        }
    }
    t_price = quantity * price[pos];
    cout<<"Total price of fruits is: "<<t_price;


}