#include <iostream>
#include <algorithm>
using namespace std;

int N, A[109];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];
    int M = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                int a = A[i], b = A[j], c = A[k];
                if (a < b + c && b < c + a && c < a + b) M = max(M, a + b + c);
            } 
        }
    }
    cout << M << endl;
    return 0;
}