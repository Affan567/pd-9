

#include <iostream>
using namespace std;
bool check(int num);
string n;
main()
{
    cout<<"Enter a string: ";
    cin>>n;
    int i =0 , count = 0;
    while(n[i] != '\0')
    {
        count ++;
        i ++;
    } 
    
    bool res = check (count);
    cout<<res;    

}


bool check(int num)
{
    if(num % 2 == 0)
    {
        return true;
    }
    else{
        return false;
    }
}