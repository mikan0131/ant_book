#include <iostream>
#include <algorithm>
using namespace std;

pair <int, int> itv[100009];
int N, S[100009], T[100009];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> S[i];
    for (int i = 0; i < N; i++) cin >> T[i];
    for (int i = 0; i < N; i++) {
        itv[i].first = T[i];
        itv[i].second = S[i];
    }
    sort(itv, itv + N);
    int ans = 0, t = 0;
    for (int i = 0; i < N; i++) {
            if (t < itv[i].second) {
                ans++;
                t = itv[i].first;
            }
    }
    printf("%d\n", ans);
    return 0;
}