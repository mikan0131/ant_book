#include <iostream>
using namespace std;

const int V[6] = {1, 5, 10, 50, 100, 500};

int C[6];
int A;

int main() {
    for (int i = 0; i < 6; i++) cin >> C[i];
    cin >> A;
    int ans = 0;
    for (int i = 5; i >= 0; i--) {
        int t = min(A / V[i], C[i]);
        ans += t;
        A -= V[i] * t;
    }
    printf("%d\n", ans);
    return 0;
}