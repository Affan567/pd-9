
#include <iostream>
using namespace std;
main()
{
    string n;
    string arr[4];
    cout<<"Enter Character or your choice: ";
    cin>>n;
    for(int i= 0; i<4; i++)
    {
        cout<<"Enter character at index "<<i<<": ";
        cin>>arr[i];        
        if(arr[i] == n)
        {
            cout<<"True\n";
        }
        else{
            cout<<"false\n";
        }
    }

}