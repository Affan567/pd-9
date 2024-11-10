#include <iostream>
#include <string>

using namespace std;

void getDanceMove(int digit, int index) {
    string MOVES[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    int moveIndex = (digit + index) % 10;
    cout << MOVES[moveIndex] << " ";
}

int main() {
    string pin;

    cout << "Enter your 4-digit PIN: ";
    cin >> pin;

    if (pin.length() != 4) {
        cout << "Invalid input." << endl;
        return 1;
    }

    for (int i = 0; i < 4; i++) {
        if (isdigit(pin[i])) {
            int digit = pin[i] - '0';
            getDanceMove(digit, i);
        } else {
            cout << "Invalid input." << endl;
            return 1;
        }
    }

    cout << endl;
    return 0;
}