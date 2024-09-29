#include <iostream>
#include <algorithm>
using namespace std;

int N, A[29], K;

bool dfs(int i, int sum) {
    if (i == N) return sum == K;
    if (dfs(i + 1, sum) == true) return true;
    if (dfs(i + 1, sum + A[i]) == true) return true;
    return false;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];
    cin >> K;
    if (dfs(0, 0) == true) printf("Yes\n");
    else printf("No\n");
    return 0;
}