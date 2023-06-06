#include<bits/stdc++.h>
using namespace std;
string replaceString(string S, string X) {
    string result = S;
    size_t increase = 0;
    while ((increase = result.find(X, increase)) != -1) {
        result.replace(increase, X.length(), "$");
        increase += 1;
    }
    return result;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        string S, X;
        cin >> S >> X;

        string rep = replaceString(S, X);
        cout<<rep<<endl;
    }

    return 0;
}