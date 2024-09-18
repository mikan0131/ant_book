#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1'000'000'000;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int L, N, X[1000009];
        cin >> L >> N;
        for (int j = 0; j < N; j++) cin >> X[i];
        int m = INF;
        for (int j = 0; j < N; j++) {
            m = min(m, X[j] - 0);
            m = min(m, L - X[j]);
        }
        int M = 0;
        for (int j = 0; j < N; j++) {
            M = max(M, X[j] - 0);
            M = max(M, L - X[j]);
        }
        cout << m << ' ' << M << endl;
    }
}