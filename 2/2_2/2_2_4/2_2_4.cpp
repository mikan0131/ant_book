#include <bits/stdc++.h>
using namespace std;

int N, R;
int X[1009];

int main() {
    // 入力
    cin >> N >> R;
    for (int i = 0; i < N; i++) cin >> X[i];
    int i = 0, ans = 0;
    while(i < N) {
        // sはカバーされてない一番左の点の位置
        int s = X[i++];
        // sから距離Rを超えるまで進む
        while(i < N && X[i] <= s + R) i++;
        // pは新しく印をつける点の位置
        int p = X[i - 1]; // <=補正
        // pから距離Rを超える点まで進む
        while(i < N && X[i] <= p + R) i++;
        ans++;
    }
    printf("%d\n", ans);
}