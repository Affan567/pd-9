
#include <iostream>
using namespace std;
main()
{
    int n;
    int arr[n];
    cout<<"Enter length of the array: ";
    cin>> n;
    int i;
    for( i = 0; i<n; i++)
    {
        cout<<"Enter element at index "<<i<<": ";
        cin>>arr[i];
        
        if(arr[i] == 7)
        {
            cout<<"\tBoom";
        }
        else
        {
            cout<<"not 7\t";
        }

    
    }  
        

}