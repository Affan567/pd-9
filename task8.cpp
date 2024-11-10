#include <iostream>
#include <string>

using namespace std;

int timeToColor(string colors[], int n) {
    int time = 0;
    string prevColor = "";

    for (int i = 0; i < n; i++) {
        if (colors[i] != prevColor) {
            time = time + 1; 
            prevColor = colors[i];
        }
        time =time + 2; 
    }

    return time;
}

int main() {
    int n;
    cout << "Enter the number of colors: ";
    cin >> n;

    string colors[n];
    cout << "Enter the colors:\n";
    for (int i = 0; i < n; i++) {
        cin >> colors[i];
    }

    int totalTime = timeToColor(colors, n);
    cout << "Total time to color the pattern: " << totalTime << " seconds" << endl;

    return 0;
}