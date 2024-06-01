#include <bits/stdc++.h>
using namespace std;

// 가중치가 맵에서 최단 거리를 사용할 수 있는 BFS 를 사용
const int max_n = 104;
int n, m, a[max_n][max_n], y, x;
int visited[max_n][max_n]; // 방문 여부 및 거리 정보를 저장할 배열

int dy[] = {-1, 1, 0, 0}; // 상하좌우
int dx[] = {0, 0, -1, 1};

int main(){
  // 행렬의 차원을 읽습니다.
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%1d", &a[i][j]);
        }
    }
    queue<pair<int, int>> q;
    visited[0][0] = 1;
    q.push({0,0});
    while(q.size()){
        tie(y,x) = q.front(); q.pop();
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 0) continue;

            if(visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1; // 이전 위치까지의 거리 + 1
            q.push({ny, nx});
        }
    }
    printf("%d", visited[n-1][m-1]);
    return 0;
}