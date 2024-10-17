#include <iostream>
#include <algorithm>
using namespace std;

int L, N, X[100009];

int main() {
    cin >> L >> N;
    for (int i = 0; i < N; i++) cin >> X[i];
    int minT = 0;
    for (int i = 0; i < N; i++) {
        minT = max(minT, min(X[i], L - X[i]));
    }
    int maxT = 0;
    for (int i = 0; i < N; i++) {
        maxT = max(maxT, max(X[i], L - X[i]));
    }
    printf("%d %d\n", minT, maxT);
}