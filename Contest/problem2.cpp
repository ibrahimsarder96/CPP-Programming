#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int bucketsRequired = 22;
        int maxPeople = X / bucketsRequired;

        cout << maxPeople << endl;
    }

    return 0;
}