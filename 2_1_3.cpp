#include <iostream>
#include <queue>
using namespace std;

typedef pair <int, int> P;
char maze[19][19 + 1];
int N, M;
int sx, sy;
int gx, gy;
const int INF = 1'000'000'000;
int d[19][19];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int dfs() {
    queue <P> que;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cin >> maze[i][j];
    }
    que.push(P(sx, sy));
    d[sx][sy] = 0;
    while (que.size()) {
        P p = que.front(); que.pop();
        if (p.first == gx && p.second == gy) break;
        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' &&d[nx][ny] == INF) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> maze[i][j];
        }
    }
    printf("%d\n", dfs());
    return 0;
}