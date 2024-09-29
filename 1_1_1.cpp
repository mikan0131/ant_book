#include <iostream>
using namespace std;

int N, M, K[59];

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> K[i];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                for (int l = 0; l < N; l++) {
                    if (K[i] + K[j] + K[k] + K[l] == M) {cout << "Yes" << endl; return 0;}
                }
            }
        }
    }
    cout << "No" << endl; return 0;
}