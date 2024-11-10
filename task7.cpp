#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cout << "Enter string one: ";
    cin >> s1;
    cout << "Enter string two: ";
    cin >> s2;

    int i = 0, count = 0, j = 0;

    while (s1[i] != '\0') {
        while (s2[j] != '\0') {
            if (s1[i] == s2[j]) {
                count++;
                s2[j] = '0'; 
                break;
            }
            j++;
        }
        i++;
        j = 0;
    }

    cout << count << endl;

    return 0;
}