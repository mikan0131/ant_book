#include <iostream>
#include <queue>
using namespace std;

const int INF = 1'000'000'000;
typedef pair <int, int> P;//typedefしとくとあとで便利

char maze[109][109];
int N, M;
int sx, sy;
int gx, gy;

int d[109][109];

//方向のベクトル
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int dfs() {
    queue<P> que;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            d[i][j] = INF;
        }
    }
    que.push(P(sx, sy));
    d[sx][sy] = 0;
    while (que.size()) {//キューが空になるまで続ける
        P p = que.front(); que.pop();
        if (p.first == gx && p.second == gy) break;
        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i]; int ny = p.second + dy[i];
            if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] == '#' && d[nx][ny] == INF) que.push(P(nx, ny));
            
        }
    }
}