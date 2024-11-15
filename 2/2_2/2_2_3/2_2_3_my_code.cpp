#include <bits/stdc++.h>
using namespace std;

int N;
string S;

int main() {
    cin >> N >> S;
    int a = 0, b = N - 1;
    while (a <= b) {
        string T = "";
        for (int i = a; i <= b; i++) T += S[i];
        string R = T;
        reverse(R.begin(), R.end());
        if (T < R) {putchar(T[0]); a++;}
        else {putchar(R[0]); b--;}
        cout << a << ' ' << b << endl;
    }
    putchar('\n');
    return 0;
}